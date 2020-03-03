#include "algdijkstra.h"
#include<QDebug>
#define INFINITY 9999
#define max 5

algDijkstra::algDijkstra()
{

}
void algDijkstra::dijkstra(int G[max][max],int n,int startnode) {
    int cost[max][max],distance[max],pred[max];
       int visited[max],count,mindistance,nextnode,i,j;
       for(i=0;i<n;i++)
          for(j=0;j<n;j++)
       if(G[i][j]==0)
          cost[i][j]=INFINITY;
       else
          cost[i][j]=G[i][j];
       for(i=0;i<n;i++) {
          distance[i]=cost[startnode][i];
          pred[i]=startnode;
          visited[i]=0;
       }
       distance[startnode]=0;
       visited[startnode]=1;
       count=1;
       while(count<n-1) {
          mindistance=INFINITY;
          for(i=0;i<n;i++)
             if(distance[i]<mindistance&&!visited[i]) {
             mindistance=distance[i];
             nextnode=i;
          }
          visited[nextnode]=1;
          for(i=0;i<n;i++)
             if(!visited[i])
          if(mindistance+cost[nextnode][i]<distance[i]) {
             distance[i]=mindistance+cost[nextnode][i];
             pred[i]=nextnode;
          }
          count++;
   }
      QString rutaNodo="";
   for(i=0;i<n;i++)

       if(i!=startnode) {
             rutaNodo = rutaNodo+" ruta nodo "+i;
             rutaNodo =rutaNodo+" nodo = "+i;

             j=i;
             do {
                j=pred[j];

                rutaNodo= rutaNodo+" nodo<-"+j;

             }while(j!=startnode);
          }
    qDebug()<<rutaNodo;
   *ruta=rutaNodo;

}






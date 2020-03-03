#ifndef ALGDIJKSTRA_H
#define ALGDIJKSTRA_H
#include "mainwindow.h"

class algDijkstra
{
public:
    algDijkstra();
    int G[5][5]={{0,1,0,3,10},{1,0,5,0,0},{0,5,0,2,1},{3,0,2,0,6},{10,0,1,6,0}};
    void dijkstra(int G[5][5],int n,int startnode) ;
    int final;
    QString *ruta;
};

#endif // ALGDIJKSTRA_H

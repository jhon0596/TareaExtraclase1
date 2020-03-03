#include "grafo.h"



Grafo::Grafo(int V)
    {
        this->V = V; // atribui o número de vértices

        /*
            cria as listas onde cada lista é uma lista de pairs
            onde cada pair é formado pelo vértice destino e o custo
        */
        adj = new list<pair<int, int> >[V];
    }

void Grafo::addAresta(int v1, int v2, int custo)
    {
        adj[v1].push_back(make_pair(v2, custo));
    }

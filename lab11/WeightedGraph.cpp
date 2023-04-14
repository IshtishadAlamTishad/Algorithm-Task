/*
    5 Nodes 7 Edges

    5 7
    0 1 3
    0 3 7
    0 4 8
    4 3 3
    1 3 4
    1 2 1
    2 3 2


*/

#include<bits/stdc++.h>
using namespace std;

void initialize(int **g,int nodes) {
 for(int i=0;i<nodes;++i) {
    for(int j=0;j<nodes;++j) {
        g[i][j] = 0;
    }
 }
}
void addEdge(int **g,int u,int v,int w) {
    g[u][v] = w;
   // g[v][u] = w;
}
void print(int **g,int nodes) {
    cout << "Weighted Directed Graph using Adjacency Matrix : \n\n";
    for(int i=0;i<nodes;i++) {
        for(int j=0;j<nodes;j++) {
            cout << g[i][j] << " ";
        }
        cout << '\n';
    }
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);


    int nodes,edges;
    int **g;
    cin >> nodes >> edges;

    g = new int*[nodes];

    for(int i=0;i<nodes;++i) {
        g[i] = new int[nodes];
    }

    initialize(g,nodes);

    for(int i=0;i<edges;i++) {
        int u,v,w;
        cin >> u >> v >> w;
        addEdge(g,u,v,w);
    }
    print(g,nodes);

}
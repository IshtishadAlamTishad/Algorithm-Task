
#include<bits/stdc++.h>
using namespace std;

#define n 100

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int nodes,edges;
    int g[n][n];
    cin >> nodes >> edges;
    int u,v,w;
    for(int i=0;i<edges;i++) {
        cin >> u >> v >> w;
        // Undirected graph
        g[u][v] = w;
        g[v][u] = w;
    }

    cout << "Adjacency Matrix : \n\n";
    for(int i=0;i<nodes;i++) {
        for(int j=0;j<nodes;j++) {
            cout << g[i][j] << " ";
        }
        cout << '\n';
    }

}
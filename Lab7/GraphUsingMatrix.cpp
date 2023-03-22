/*
  7 Nodes 11 Edges

  0->1 = 1
  0->3 = 1
  
  1->5 = 1
  1->2 = 1
  1->3 = 1
  1->6 = 1
  1->0 = 1

  2->1 = 1
  2->3 = 1
  2->5 = 1
  2->4 = 1

  3->0 = 1
  3->1
  3->2
  3->4

  4->3=1
  4->2 = 1
  4->6 =1

  5->1 = 1
  5->2 = 1


*/

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
    int u,v;
    for(int i=0;i<edges;i++) {
        cin >> u >> v;
        // Undirected graph
        g[u][v] = 1;
        g[v][u] = 1;
    }

    cout << "Adjacency Matrix : \n\n";
    for(int i=0;i<nodes;i++) {
        for(int j=0;j<nodes;j++) {
            cout << g[i][j] << " ";
        }
        cout << '\n';
    }

}
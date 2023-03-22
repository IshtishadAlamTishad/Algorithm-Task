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


class Graph
{
  private :
  int nodes;
  int edges;
  int **g;
  public :
  Graph() {}
  Graph(int nodes,int edges) {
    this->nodes=nodes;
    this->edges=edges;
     g = new int*[nodes];

    for(int i=0;i<nodes;++i) {
        g[i] = new int[nodes];
    }
  }
    
void initialize() {
 for(int i=0;i<nodes;++i) {
    for(int j=0;j<nodes;++j) {
        g[i][j] = 0;
    }
 }
}
void addEdge(int u,int v) {
    g[u][v] = 1;
    g[v][u] = 1;
}
void printGraph() {
    cout << "Adjacency Matrix : \n\n";
    for(int i=0;i<nodes;i++) {
        for(int j=0;j<nodes;j++) {
            cout << g[i][j] << " ";
        }
        cout << '\n';
    }
}

};



int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);


    int nodes,edges;
    cin >> nodes >> edges;

    Graph graph(nodes,edges);
    graph.initialize();

    int u,v;
    for(int i=0;i<edges;i++) {
        cin >> u >> v;
        graph.addEdge(u,v);
    }
    graph.printGraph();
}
#include<bits/stdc++.h>
using namespace std;

class Graph
{
  private :
  int nodes,edges;
    vector<int> *g;
    public :
    Graph() {}
    Graph(int nodes,int edges) {
        this->nodes=nodes;
        this->edges=edges;
        g = new vector<int>[nodes];
    }

    void addList(int u,int v) {
        g[u].push_back(v);
        g[v].push_back(u);
    }   

    void print()
    {
        for(int i=0;i<nodes;++i) {
        cout << i << "--> ";
       for(int j=0;j<g[i].size();++j) {
        cout << g[i][j]<< ",";
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

    for(int i=0;i<edges;++i) {
        int u,v;
        cin >> u >> v;
        graph.addList(u,v);
        graph.addList(v,u);
    }
    graph.print();
    
}
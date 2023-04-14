#include<bits/stdc++.h>
using namespace std;

struct vertex
{
    int value;
    int cost;
};

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int nodes,edges;
    cin >> nodes >> edges;
    vector<vertex> *g = new vector<vertex>[nodes];

    for(int i=0;i<edges;++i) {
        int u,v,w;
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    for(int i=0;i<nodes;++i) {
        cout << i << "--> ";
       for(int j=0;j<g[i].size();++j) {
        cout <<"(" << g[i][j].value << "," << g[i][j].cost << ") ";
    } 
    cout << '\n';
    }
}
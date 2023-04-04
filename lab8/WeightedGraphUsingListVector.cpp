#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    int weight;
};

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int nodes,edges;
    cin >> nodes >> edges;
    vector<node> *g = new vector<node>[nodes];

    for(int i=0;i<edges;++i) {
        int u,v,w;
        cin >> u >> v >> w;
        node s1 = {v,w};
        g[u].push_back(s1);
        node s2 = {u,w};
        g[v].push_back(s2);
    }
    for(int i=0;i<nodes;++i) {
        cout << i << "--> ";
       for(int j=0;j<g[i].size();++j) {
       
       node o  = g[i][j];
        cout << '(' <<  o.value << " " << o.weight << ')';
    } 
    cout << '\n';
    }
}
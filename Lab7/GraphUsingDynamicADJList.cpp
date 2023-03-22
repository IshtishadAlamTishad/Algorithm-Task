#include<bits/stdc++.h>
using namespace std;


int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);



    int nodes,edges;
    cin >> nodes >> edges;
    vector<int> *g = new vector<int>[nodes];

    

    for(int i=0;i<edges;++i) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=0;i<nodes;++i) {
        cout << i << "--> ";
       for(int j=0;j<g[i].size();++j) {
        cout << g[i][j]<< ",";
    } 
    cout << '\n';
    }
}
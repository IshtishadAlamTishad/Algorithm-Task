#include<bits/stdc++.h>
using namespace std;

#define n 100

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    vector<int> v;
//    v.push_back(10);
   // cout << v.size() << '\n';
//    for(int i=0;i<v.size();++i) {
 //       cout << v[i] << " ";
  //  }

    int nodes,edges;
    cin >> nodes >> edges;
    vector<int> g[n];

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
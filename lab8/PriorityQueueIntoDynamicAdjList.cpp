#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    int weight;
};

bool cmp(node l,node r)
{
    return l.value > r.value;
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    priority_queue<node,vector<node>, cmp> pq;

    int nodes,edges;
    cin >> nodes >> edges;
    vector<node> *g = new vector<node>[nodes];

    for(int i=0;i<edges;++i) {
        int u,v,w;
        cin >> u >> v >> w;
        node s1 = {v,w};
        g[u].push_back(s1);
        pq.push(s1);
        node s2 = {u,w};
        g[v].push_back(s2);
        pq.push(s2);
    }

    node s =  pq.top();


    for(int i=0;i<nodes;++i) {
        cout << i << "--> ";
       for(int j=0;j<g[i].size();++j) {
       
       node o = g[i][j];
        cout << '(' <<  o.value << " " << o.weight << ')';
    } 
    cout << '\n';
    }
}
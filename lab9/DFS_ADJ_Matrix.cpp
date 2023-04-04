#include<bits/stdc++.h>
using namespace std;

void dfs(int **G, int n,int source) {
    stack<int> S;
    bool *vis = new bool[n];

    for(int i=0;i<n;++i) {
        vis[i] = false;
    }
    vis[source] = true;
    S.push(source);

    while(!S.empty()) {
        int v = S.top();
        S.pop();
        cout << v << " ";
        for(int i=0;i<n;++i) {
            if(G[v][i]==1) {
                int next=i;
            if(vis[next] == false) {
                S.push(next);
                vis[next] = true;
            }
            }
        }
    }
    cout << '\n';

    cout << "\nDFS Running : \n";
    for(int i=0;i<n;++i) {
        cout << i<< " " << vis[i] << '\n';
    }
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);


    
    int nodes;
    int edges;
    cin >> nodes >> edges;

    int **g;

    g = new int*[nodes];
     for(int i=0;i<nodes;++i) {
        g[i] = new int[nodes];
    }
    for(int i=0;i<nodes;++i) {
        for(int j=0;j<nodes;++j) {
         g[i][j] =0;
        }
    }

    int u,v;
    for(int i=0;i<edges;++i) {
        cin >> u >> v;
        g[u][v] = 1;
        g[v][u] = 1;
    }

    for(int i=0;i<nodes;++i) {
        cout << i << "--> ";
        for(int j=0;j<nodes;++j) {
            cout << g[i][j] << " ";
        }
        cout << '\n';
    }
    dfs(g,nodes,0);
}
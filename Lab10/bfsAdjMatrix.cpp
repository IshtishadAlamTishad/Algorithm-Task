#include<bits/stdc++.h>
using namespace std;

void bfs(int **G, int n,int s) {
    
    int *visited = new int[n];
    int *distance = new int[n];

    for(int i=0;i<n;++i) {
        visited[i] = distance[i] = false;
    }
    queue<int> q;
    q.push(s);
    visited[s] = true;
    distance[s] = 0;
    
    while(!q.empty()) {
        int p = q.front();
        q.pop();
        // adjacent of present node
        cout << p << " ";
        for(int i=0;i<n;++i) {
            if(G[p][i]==1)
            {
              int nextAdj = i;
            if(visited[nextAdj] == false) {
                G[p][i] = 1;
                q.push(nextAdj);
                visited[nextAdj] = true;
                distance[nextAdj] = distance[p]+1;
            }
            }
        }
    } 
    cout << "\nDFS Running : \n";
    for(int i=0;i<n;++i) {
        cout << i<< " " << visited[i] << '\n';
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
    bfs(g,nodes,0);
}
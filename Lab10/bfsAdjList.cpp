#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> *G,int n,int s)
{
    int *visited = new int[n];
    int *distance = new int[n];

    for(int i=0;i<n;++i) {
        visited[i] = distance[i] = 0;
    }
    queue<int> q;
    q.push(s);
    visited[s] = 1;
    distance[s] = 0;

    while(!q.empty()) {
        int p = q.front();
        q.pop();
        // adjacent of present node
        cout << p << " ";
        for(int i=0;i<G[p].size();++i) {
            int nextAdj = G[p][i];
            if(visited[nextAdj]==0) {
                visited[nextAdj] = 1;
                q.push(nextAdj);
                distance[nextAdj] = distance[p]+1;
            }
        }
    } 
    cout << "Distance from " << s << "\n";
        for(int i=0;i<n;++i) {
            cout << s << " to " << i << " : " << distance[i] << '\n';
        }

}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    vector<int> *g;
    int nodes;
    int edges;
    cin >> nodes >> edges;

    g = new vector<int>[nodes];

    int u,v;
    for(int i=0;i<edges;++i) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i=0;i<nodes;++i) {
        cout << i << "--> ";
        for(int j=0;j<g[i].size();++j) {
            cout << g[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    int source;
    cin >> source;
    bfs(g,nodes,source);

//    bfs(g,nodes,0);

}
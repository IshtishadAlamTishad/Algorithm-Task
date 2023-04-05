#include<bits/stdc++.h>
using namespace std;
 
vector<vector<int>> adj;
 
 
// function to add edge to the graph
void addEdge(int x,int y)
{
    adj[x][y] = 1;
    adj[y][x] = 1;
}
 
// Function to perform BFS on the graph
void bfs(int start)
{
    // Visited vector to so that
    // a vertex is not visited more than once
    // Initializing the vector to false as no
    // vertex is visited at the beginning
    vector<bool> visited(adj.size(), false);
    vector<int> q;
    q.push_back(start);
  
    // Set source as visited
    visited[start] = true;
  
    int vis;
    while (!q.empty()) {
        vis = q[0];
  
        // Print the current node
        cout << vis << " ";
        q.erase(q.begin());
  
        // For every adjacent vertex to the current vertex
        for (int i = 0; i < adj[vis].size(); i++) {
            if (adj[vis][i] == 1 && (!visited[i])) {
  
                // Push the adjacent node to the queue
                q.push_back(i);
  
                // Set
                visited[i] = true;
            }
        }
    }
}
  
// Driver code
int main()
{

      freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
  // number of vertices
  int v,e;
  cin >> v >> e;
 
 
  // adjacency matrix
  adj= vector<vector<int>>(v,vector<int>(v,0));
 
 for(int i=0;i<e;++i)
 {
    int u,v;
    cin >> u >>v;
     addEdge(u,v);
      addEdge(v,u);
 }
 
 
  // perform bfs on the graph
  bfs(0);
}
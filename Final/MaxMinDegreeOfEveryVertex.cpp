// Writing 2 Functions maxDegree & minDegree to find max && min degree of a graph


#include<bits/stdc++.h>
using namespace std;

void degreeOfVertices(vector<int> *g,int v){
    vector<int> deg;
    for(int i=0;i<v;++i) {
    deg.push_back(g[i].size());
    }
     for(int i=0;i<v;i++){
            cout << i <<" has degree of -> " <<deg[i] << '\n';
     }
}

vector<int> * graph(int v){
    return new vector<int>[v];
}

void addEdge(vector<int> *g, int u,int v ){
    g[u].push_back(v);
    g[v].push_back(u);
}

void printGraph(vector<int>*g,int v){

 for(int i=0;i<v;i++){
            cout <<i<<"->";
        for(int j=0;j<g[i].size();j++){
            cout <<g[i][j]<<" ";
        }
        cout <<'\n';
    }
}

int main(){
    ifstream in("graph.txt");
    int vertex=0;
    int edge=0;  
      
    in>>vertex>>edge;
    in >> vertex >> edge;
    vector<int> *g = graph(vertex);
    
    int u1,v1;

    for(int i=0;i<edge;i++){
        in>>u1>>v1;
        addEdge(g,u1,v1);
    }


    printGraph(g,vertex);
    cout << '\n';
    cout << "Showing degrees of nodes -> " << endl;

    degreeOfVertices(g,vertex);
}


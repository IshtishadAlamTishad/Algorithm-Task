// Writing the whole code using Object Oriented Porgram

// Combining previous 2 tasks & OOP Approach

#include<bits/stdc++.h>
using namespace std;


class GRAPH
{
private :
    int v;
    int e;
    int **g;
public :
    GRAPH();
    GRAPH(int v,int e) {
        this->v=v;
        this->e=e;
        g = new int*[v];
        for(int i=0;i<v;++i) {
            g[i] = new int[v];
        }
    }

void degreeOfVertex()
{
    for(int i=0;i<v;++i) {
             int ct=0;
        for(int j=0;j<v;++j) {
            if(g[i][j]!=0) ct++;
        }
        cout << i << " degree is : " << ct << endl;
    }
}

int maxDegree()
{
    int *a = new int[v];
    for(int i=0;i<v;++i) {
        a[i] =0;
    }

    for(int i=0;i<v;++i) {
             int ct=0;
        for(int j=0;j<v;++j) {
            if(g[i][j]!=0) ct++;
        }
        a[i] = ct;
    }
    int mx=a[0];
    for(int i=0;i<v;++i) {
        if(mx < a[i]) {
            mx = a[i];
        }
    }
    return mx;
}

int minDegree()
{
    int *a = new int[v];
    for(int i=0;i<v;++i) {
        a[i] =0;
    }
    for(int i=0;i<v;++i) {
             int ct=0;
        for(int j=0;j<v;++j) {
            if(g[i][j]!=0) ct++;
        }
        a[i] = ct;
    }
    int mn=a[0];


    for(int i=0;i<v;++i) {
        if(mn > a[i]) {
            mn = a[i];
        }
    }
    return mn;
}

void initialize() {
 for(int i=0;i<v;++i) {
    for(int j=0;j<v;++j) {
        g[i][j] = 0;
    }
 }
}

void addEdge(int u,int v){
    g[u][v]=g[v][u]=1;
}

void printGraph(){
     for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
}
};
int main(){
int v;
int edge;
    ifstream in("graph.txt");
    in>>v>>edge;

    GRAPH G(v,edge);
    G.initialize();


    int u1,v1;
    for(int i=0;i<edge;i++){
        in>>u1>>v1;
        G.addEdge(u1,v1);
    }

    G.printGraph();
    cout << endl;
    G.degreeOfVertex();
    cout << endl;

    cout << "Max Degree is : " << G.maxDegree();
    cout << endl;
    cout << "Min Degree is : " << G.minDegree();
    cout << endl;
}

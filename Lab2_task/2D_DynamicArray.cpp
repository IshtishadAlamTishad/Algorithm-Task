#include<bits/stdc++.h>
using namespace std;

int **matrix(int row,int col) {

    int **m = new int*[row];
    for(int i=0;i<row;++i) {
        m[i] = new int[col];
    }
 return m;
}

void generateData(int **p,int row,int col) {
    for(int i=0;i<row;++i) {
        for(int j=0;j<col;++j) {
           p[i][j]=10;
        // cin >> m[i][j];
        }
    }
}

void printMatrix(int **p,int row,int col) {
    for(int i=0;i<row;++i) {
        for(int j=0;j<col;++j) {
            cout << p[i][j] << " ";
        }
        cout << '\n';
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    // Allocation the memory (heap)

    int row;
    int col;
    cin >> row >> col;
    int **p = matrix(row,col);

    // data input
    
    generateData(p,row,col);
    
    // data output

    printMatrix(p,row,col);
    

}

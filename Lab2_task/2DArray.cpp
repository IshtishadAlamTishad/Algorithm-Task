#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    // Allocation the memory (heap)
    int row;
    int col;
    cin >> row >> col;
    int **m = new int*[row];
    for(int i=0;i<row;++i) {
        m[i] = new int[col];
    }
    // data input
    for(int i=0;i<row;++i) {
        for(int j=0;j<col;++j) {
           m[i][j]=10;
        // cin >> m[i][j];
        }
    }
    // data output
    for(int i=0;i<row;++i) {
        for(int j=0;j<col;++j) {
            cout << m[i][j] << " ";
        }
        cout << '\n';
    }
}

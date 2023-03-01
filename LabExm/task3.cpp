#include<bits/stdc++.h>
using namespace std;

void Random(int *a,int n) {
 srand(time(0));
 for(int i=0;i<n;++i) {
    a[i] = rand();
 }
}

int main()
{
    ofstream fout("output.txt");
    srand(time(0));
    int n = 100000;
    int *a = new int[n];
    
    Random(a,n);

    for(int i=0;i<n;++i) {
        fout << i+1 << " " << a[i] << "\n";
    }
    cout << '\n';    




}
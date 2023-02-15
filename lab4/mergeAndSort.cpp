#include<bits/stdc++.h>
using namespace std;

void print(int *a,int n) {
    for(int i=0;i<n;++i) {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int *mergeList(int *a,int *b,int m,int n) {
    int i=0,j=0,k=0;
    int *c = new int[n+m];
    while(i<m && j<n) {
        if(a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while(i<m) {
        c[k++] = a[i++];
    }
    while(j<n) {
        c[k++] = b[j++];
    }
   return c;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int a[] = {10,12,18,22,30,35};
    int b[] = {15,19,25,32,45,56,100,150};
    
    int m = 6;
    int n = 8;
    cout << "A : ";
     print(a,m);
    cout << "B : ";
     print(b,n);
 
    int *c = mergeList(a,b,m,n);
    cout << "C : ";
    print(c,(m+n));
}
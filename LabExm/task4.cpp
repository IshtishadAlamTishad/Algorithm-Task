#include<bits/stdc++.h>
using namespace std;

int MAXPAIRWISEPRODUCTNAIVE(int *A,int n)
{
    int product=0;
    for(int i=1;i<=n;++i) {
        for(int j=1;j<=n;++j) {
            if(i!=j) {
                if(product < A[i]*A[j]) {
                    product = A[i]*A[j];
                }
            }
        }
    }
    return product;
}

int main()
{
 ofstream fout("output.txt");
 ifstream fin("input.txt");

 int n;
 fin >> n;
 int *a = new int[n];
 for(int i=1;i<=n;++i) {
    fin >> a[i];
 }

 fout << "Max Pair wise product = " << MAXPAIRWISEPRODUCTNAIVE(a,n);
}
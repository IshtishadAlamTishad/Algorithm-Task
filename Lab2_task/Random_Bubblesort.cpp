#include<bits/stdc++.h>
using namespace std;

void bubblesort(int *p,int n)
{
    for(int k=0;k<n;++k) {
 for(int i=0;i<n-1;++i) {
    if(p[i] > p[i+1]) {
        swap(p[i],p[i+1]);
    }
    }
    }
}
void generateData(int *p,int n) {
    srand(time(0));
    for(int i=0;i<n;++i) {
    p[i] = rand()%1000;
   }
}
void printList(int *p,int n) {
for(int i=0;i<n;++i) {
    cout << i+1 << " : " << p[i] << "\n";
   }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    int *a = new int[n];
    generateData(a,n);
    printList(a,n);
    cout << "....................\n";
    bubblesort(a,n);
    printList(a,n);
}

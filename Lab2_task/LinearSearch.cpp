#include<bits/stdc++.h>
using namespace std;

void generateData(int *p,int n) {
   // srand(time(0));
    for(int i=0;i<n;++i) {
    p[i] = rand()%1000;
   }
}

void printList(int *p,int n) {
for(int i=0;i<n;++i) {
    cout << i+1 << " : " << p[i] << "\n";
   }
}

int LinearSearch(int *p,int n,int item) {
    for(int i=0;i<n;++i) {
        if(p[i]==item) {
            return i;
            break;
        } else {
            return -1;
        }
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
   
    int index = LinearSearch(a,n,25);
    if(index!=-1) {
        cout << "Index found at : " << index;
    } else {
        cout << "Not found";
    }
}

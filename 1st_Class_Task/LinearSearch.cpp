#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int a[],int n,int k)
{
 for(int i=0;i<n;++i) {
   if(a[i]==k) {
     return i;
   }
 }
  return -1;
}

int main()
{
 int n = 4;
 int a[n] = {1,2,3,4};
 int k = 7;
 if(LinearSearch(a,n,k)!=-1) {
 cout << k << " is Present at " << LinearSearch(a,n,k);
 } else {
  cout << k << " is not present at array";
 }
}

#include<bits/stdc++.h>
using namespace std;


void print(int *a,int n) {
    for(int i=0;i<n;++i) {
        cout << i+1 << " " << a[i] << "\n";
    }
    cout << '\n';
}

int merge(int *A,int left,int mid,int right) {
    int n1 = mid-left+1;
    int n2 = right-mid;
    int *L = new int[n1];
    int *R = new int[n2];

    for(int i=0;i<n1;++i) {
        L[i] = A[left+i];
    }
     for(int i=0;i<n2;++i) {
        R[i] = A[mid+1+i];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2) {
        if(L[i] > R[j]) A[k++] = R[j++];
        else A[k++] = L[i++];
    }
    while(i<n1) {
        A[k++] = L[i++];
    }
    while(j<n2) {
        A[k++] = R[j++];
    }

}
void mergeSort(int *A,int left,int right) {
    int mid=0;
    if(left < right) {
        mid = (left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid+1,right);
        merge(A,left,mid,right);
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    //int a[9] = {90,12,11,56,89,900,10000,1,4};

    int n =10000;
    int *a = new int [n];
    srand(time(0));
    for(int i=0;i<n;++i) {
        a[i] = rand();
    }

    cout << "Default Array : \n";
    print(a,n);
    cout << '\n';
    cout << "\n\nMergeSorted Array : \n";
    mergeSort(a,0,n);
    print(a,n);
 
 
}
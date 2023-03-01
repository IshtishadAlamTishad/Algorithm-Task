#include<bits/stdc++.h>
using namespace std;

void Random(int *a,int n) {
 srand(time(0));
 for(int i=0;i<n;++i) {
    a[i] = rand();
 }
}

// selection sort
void selectionSort(int *a,int n)
{
 for(int i=0;i<n;++i) {
    int min = i;
    for(int j=i+1;j<n;++j) {
        if(a[j] < a[min]) {
            min = j;
        }
        swap(a[min],a[i]);
    }
 }
}

// mergeSort

void merge(int *a,int l,int mid,int r)
{
    int n1 = mid+1-l;
    int n2 = r-mid;

    int *L = new int[n1];
    int *R = new int[n2];
    for(int i=0;i<n1;++i) {
        L[i] = a[i+l];
    }
    for(int j=0;j<n2;++j) {
        R[j] = a[j+mid+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 and j<n2) {
        if(L[i] < R[j]) {
            a[k++] = L[i++];
        } else {
            a[k++] = R[j++];
        }
    } 
    while(i<n1) {
        a[k++] = L[i++];
    }
    while(j<n2) {
        a[k++] = R[j++];
    }   
}

void MergeSort(int *a,int l,int r)
{
 if(l<r) {
    int mid = (l+r)/2;
    MergeSort(a,l,mid);
    MergeSort(a,mid+1,r);
    merge(a,l,mid,r);
 }
}

int main()
{
 ofstream fout("output.txt");
ifstream fin("input.txt");
   
    

    int n=1000;

 //   srand(time(0));
    int *a = new int[n];
    
    Random(a,n);
    clock_t cl = clock();
    selectionSort(a,n-1);
    cout << "\nPrinting : \n";
    for(int i=0;i<n;++i) {
        fout << a[i] << "\n";
    }
    fout << '\n';
    cl = clock()- cl;
    fout << "\nProcessor time taken for multiplication: " << (float)cl/CLOCKS_PER_SEC << " seconds" << endl;
    

    clock_t cl2 = clock();
    MergeSort(a,0,n-1);
    fout << "\nPrinting : \n";
    for(int i=0;i<n;++i) {
        fout << a[i] << "\n";
    }
    cl2 = clock() - cl2;
    fout << "\nProcessor time taken for multiplication: " << (float)cl2/CLOCKS_PER_SEC << " seconds" << endl;

}
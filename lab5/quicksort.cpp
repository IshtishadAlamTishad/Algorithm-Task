#include<bits/stdc++.h>
using namespace std;

int partition(int *a,int low,int high)
{
 int left,right;
 int pivotItem=a[low];
 left = low;
 right = high;
    while(left<right) {
        while(a[left] <= pivotItem) {
            left++;
        } while(a[right] > pivotItem) {
                right--;
        }
        if(left<right) {
            swap(a[left],a[right]);
        }
    }
    swap(a[low],a[right]);
    return right;
}

void quickSort(int *a,int l,int h) 
{
  int pivotIndex;
  if(l<h) {
    pivotIndex = partition(a,l,h);
    quickSort(a,l,pivotIndex-1);
    quickSort(a,pivotIndex+1,h);
  }
}

void print(int *a,int n)
{
    for(int i=0;i<n;++i) {
        cout << a[i] << '\n';
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    srand(time(0));
    int *a = new int[n];
    for(int i=0;i<n;++i) {
        a[i] = rand()%1000;
    }
    //int a[] = {2,100,32,5,34,87,21};
    print(a,n);
    clock_t time = clock();
    quickSort(a,0,n-1);
    cout << "\n\nAfter QuickSort...................... : \n";
    print(a,n);
    time = clock() - time;

    cout << "Time taken : " << (float)time/CLOCKS_PER_SEC << " s" << '\n';
}

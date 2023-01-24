#include<bits/stdc++.h>
using namespace std;

void bubblesort(int a[],int n) {
	for(int i=0;i<n;++i) {
		for(int j=i;j<n-i-1;++j) {
			if(a[j] > a[j+1]) {
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main()
{
	int a[] = {5,1,3,2,4};
	int n = sizeof(a)/sizeof(int);
	bubblesort(a,n);
	for(int x:a) {
		cout << x << " ";
	}
}

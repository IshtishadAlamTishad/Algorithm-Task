#include<bits/stdc++.h>
using namespace std;
#define r(a,b,c) for(int a=b;a<c;++a)

int SecondLargestElement(int a[],int n)
{
 sort(a,a+n);
 int x = a[n-2];
 return x;
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	r(i,0,n) cin >> a[i];
	cout << SecondLargestElement(a,n);
}

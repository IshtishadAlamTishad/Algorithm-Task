#include<bits/stdc++.h>
using namespace std;
#define r(a,b,c) for(int a=b;a<c;++a)

int Fact(int n)
{
 if(n==1 or n==0) return 1;
 return Fact(n-1)*n;
}

int main()
{
	int n;
	cin >> n;
	cout << Fact(n);
}

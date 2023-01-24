#include<bits/stdc++.h>
using namespace std;
#define r(a,b,c) for(int a=b;a<c;++a)

bool isPrime(int n)
{

	bool flag =false;
  	if(n<=2) {
  		flag = false;
  	}
  	else {
  for(int i=2;i<=n;++i) {
  	if(n%i==0) {
  		flag = true;
  	}
  }
}
  return flag;
}

int main()
{
	int n;
	cin >> n;
	cout << ((isPrime) ? "YES" : "NO");
}

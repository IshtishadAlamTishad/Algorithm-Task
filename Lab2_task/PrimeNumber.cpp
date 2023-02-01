#include<bits/stdc++.h>
using namespace std;

bool prime(int n) {
    bool flag = true;
 for(int i=2;i<sqrt(n);++i) {
        if(n%i==0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin >> n;
    if(prime(n)) cout << n << " is prime";
    else cout << n << " is not prime";
}

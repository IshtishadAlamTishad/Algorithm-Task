#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return 1/(1+(exp(-x)));
}
double *linespace(double l,double h,int n)
{
    double *a = new double[n+1];
    h = (h-l)/n;
    a[0] = l;
    for(int i=1;i<=n;++i) {
        a[i] = a[i-1]+h;
    }
    return a;
}
int main()
{    
    int n=10;
    double *x = linespace(-1,1,n);
    double *y = new double[n+1];

    cout << "\n\nPrinting Linespace : \n";
    for(int i=0;i<=n;++i) {
        cout << x[i] << '\n';
    }
    cout << '\n';

    cout << "Value of F(x) = \n";
    for(int i=0;i<=n;++i) {
        cout << f(x[i]) << '\n';
    }
    cout << '\n';

}
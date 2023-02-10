#include<bits/stdc++.h>
#include<fstream>
using namespace std;

#define r(a,b,c) for(int a=b;a<c;++a)
#define re(a,b,c) for(int a=b;a<=c;++a)
ifstream fin ("A.txt");
ofstream fout ("B.txt");


void Random(int *a,int n) {
 srand(time(0));
 r(i,0,n) {
    a[i] = rand();
 }
}

void get(int *a,int n) {
    r(i,0,n) fin >> a[i];
}
void bubbleSort(int *a,int n) {
    r(k,0,n) {
        r(i,0,n-k-1) {
        if(a[i]<a[i+1]) swap(a[i],a[i+1]);
    }
    }
}

void insertionSort(int *a, int n) {
    for(int i=1;i<=n-1;++i) {
    	int current = a[i];
    	int prev = i-1;
    	while(prev>=0 and a[prev]>current) {
    		a[prev+1] = a[prev];
    		prev -= 1;
    	}
    	a[prev+1] = current;
    }
}

void print(int *a,int n) {
    r(i,0,n) {
        fout << a[i] << '\n';
    }
}


int32_t main()
{
    int n;
    fin >> n;
    int *a = new int[n];
     fout << "Before Sort : \n\n";
     Random(a,n);
     print(a,n);
    fout << "\nAfter BubbleSort : \n\n";
    bubbleSort(a,n);
    print(a,n);
    fout << "\nAfter Insertion Sort : \n\n";
    insertionSort(a,n);
    print(a,n);
}

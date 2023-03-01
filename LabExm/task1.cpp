#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream fout("output.txt");
    ifstream fin("input.txt");
    int middleID;
    fin >> middleID;
    fout << (middleID%2+1);

}
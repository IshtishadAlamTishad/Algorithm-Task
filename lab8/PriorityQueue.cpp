#include<bits/stdc++.h>
using namespace std;

class cmp {
    public :
    bool operator() (int l,int r) {
        return l>r ? 1:0;
    }
};



int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

   // priority_queue<int> pq;

  //  priority_queue<int,vector<int>,cmp > pq;
    priority_queue<int,vector<int>,greater<int> > pq;
    pq.push(2000);
    pq.push(10);
    pq.push(100);

    cout << pq.top();

   



}
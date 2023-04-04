#include<bits/stdc++.h>
using namespace std;


struct Student {
 int id;
 string name;
 double cgpa;
};

// comparator 

class cmp {
    public :
    bool operator() (Student &l,Student &r) {
        return l.cgpa<r.cgpa ? 1:0;
    }
};



int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

  
    priority_queue<Student,vector<Student>,cmp > pq;
    
    Student s1 = {100,"Tishad",4};
    Student s2 = {200,"Alex",3.9};
    Student s3 = {300,"Lisa",3.8};
    
    pq.push(s1);
    pq.push(s2);
    pq.push(s3);


    Student s = pq.top();
    cout << s.id << " " << s.name << " " << s.cgpa <<'\n';

}
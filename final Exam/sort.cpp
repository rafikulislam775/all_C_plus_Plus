#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    string name;
    int clg;
    char c;
    int id;
    int math;
    int english;
};
bool cmp(student a, student b)
{
    if(a.math+a.english==b.math+b.english){
        return a.id<b.id;
    }else{
        return a.math+a.english > b.math+b.english;
    }
}

int main()
{
    int t;
    cin >> t;
    student arr[t];
    for(int i=0; i<t; i++)
    {
        cin>>arr[i].name>>arr[i].clg>>arr[i].c>>arr[i].id>>arr[i].math>>arr[i].english;
    };
    // sorting
    sort(arr ,arr+t,cmp);
    for(int i=0; i<t; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].clg<<" "<<arr[i].c<<" "<<arr[i].id<<" "<<arr[i].math<<" " <<arr[i].english<<endl;
    };
    
    return 0;
}
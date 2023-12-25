#include<bits/stdc++.h>
using namespace std;

class student 
{
    public:
    int id;
    string name;
    char section;
    int  totalMarks;
};
bool  cmp(student a, student b)
{
    if(a.totalMarks==b.totalMarks){
        return a.id<b.id;
    }else{
        return a.totalMarks>b.totalMarks;
    }
}
int main()
{
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) 
    {
        student arr[3];
        for(int j = 0; j < 3; j++) 
        {
        cin >> arr[j].id >> arr[j].name >> arr[j].section >> arr[j].totalMarks;   
        }
        sort(arr,arr+3,cmp);
        cout <<arr[0].id << " " << arr[0].name << " " << arr[0].section << " " << arr[0].totalMarks << endl;  
    }

    return 0;
}
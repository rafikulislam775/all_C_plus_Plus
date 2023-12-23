#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};
//
bool cmp(Student a, Student b)
{
    // if(a.marks <= b.marks){
    //     return true;
    // }else{
    //     return false;
    // }
    // both are same
    if(a.marks == b.marks){
        return a.roll < a.roll;
    }else{
             return a.marks <= b.marks;
    }

};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0 ; i<n; i++){
        // cin.ignore();
        // getline(cin, a[i].name);
        cin >> a[i].name >> a[i].roll >> a[i].marks;
        // cin >>a[i].roll >> a[i].marks;
    }
    // sorting 
    sort(a,a+n,cmp);

    for(int i =0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll <<" " <<a[i].marks<<endl;
    }
 
    return 0;
    
}
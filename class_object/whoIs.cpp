#include<bits/stdc++.h>
using namespace std;

 class student 
{
    public:
    int id;
    string name;
    char section;
    int  totalMarks;
    student(int id,string name,char section, int totalMarks){
       this->id = id;
       this->name=name;
       this->section=section;
       this->totalMarks = totalMarks;
    }
};
student* fun(){
    int id;
    string name;
    char section;
    int  totalMarks;
    cin>>id>>name>>section>>totalMarks;
    student* x = new student(id, name, section, totalMarks);
    return x;
}
int main()
{
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
          student* ans = fun();
        cout << ans->id <<" "<<ans->name <<" "<< ans->section <<" "<< ans->totalMarks<<endl;   
        }  
    }
    return 0;
}
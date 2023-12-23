#include<bits/stdc++.h>
using namespace std;

 class student 
{
    public:
    int roll;
    int cls;// class
    double gpa;
    // class name er smae name hobe
    // student(int r,int c,double g){
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
    student(int roll,int cls,double gpa){
        //this use kore var er name same raka jai
       this->roll = roll;
       this->cls = cls;
       this->gpa = gpa;
    }
};
int main()
{
    //normal variables declaration
    student rahim(342,10,4.56);
    //dynamics declaration
    student* karim = new student(10,25,3.25);
    // normal values printing
    cout <<"normal printing: " <<rahim.cls<<" "<<rahim.gpa<<" "<<rahim.roll<<endl;
    //dynamics variables printing
    cout <<"dynamics printing: "<<karim->cls<<" "<<karim->gpa<<" "<<karim->roll<<endl;
    return 0;
}
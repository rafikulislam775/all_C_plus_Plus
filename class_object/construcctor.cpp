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
    student rahim(10,5,4.56);
    //student function use na korle emon kore values patate hoy
    // rahim.cls = 10;
    // rahim.roll =01;
    // rahim.gpa = 4.56;

    student fahim(30,5,3.54);
    // fahim.cls = 10;
    // fahim.roll =01;
    // fahim.gpa = 4.56;
    cout<<rahim.roll <<endl <<fahim.roll;

    return 0;
}
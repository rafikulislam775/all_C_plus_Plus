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
// student fun(){
//     student rahim(3,10,3.65);
//     return rahim;
// }
student* fun(){
    // student rahim(33,101,3.65);
    // student *p = &rahim;
    student* karim = new student(10,25,3.25);
    return karim;
}
int main()
{
    // student ans = fun();
    // cout << ans.roll<<"  "<<ans.gpa<<"  "<<ans.cls<<endl;
    student* ans = fun();
    cout << ans->roll<<"  "<<ans->gpa<<"  "<<ans->cls<<endl;
    // dynamically generate value k delete kortey hobe
    delete ans;
    return 0;
}
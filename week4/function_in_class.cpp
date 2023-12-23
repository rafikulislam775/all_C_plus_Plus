#include<bits/stdc++.h>
using namespace std;

// declare object clas
class Person
{
    public:
    string name;
    int age;
    char grade;
    double  gpa;
    // data gogo k 
    Person(string name, int age, char grade, double gpa){
        this->name = name;
        this->age= age;
        this->grade= grade;
        this->gpa = gpa;

    }
    void personInformation()
    {
        cout<<name<<" "<<age<<" "<<grade<<" "<<gpa<<endl;
    }
};

int main()
{
    Person rakib("jon",25,'a',4.56);
    Person sakib("sakib",25,'a',4.56);
    // cout<<rakib.name <<rakib.grade<<rakib.gpa<<endl;
    rakib.personInformation();
    sakib.personInformation();

    return 0;
}
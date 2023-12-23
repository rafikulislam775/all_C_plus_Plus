#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    char name[100];
    int roll;
    double cgpa;

};
int main()
{
    student a;
    a.roll = 101;
    a.cgpa =3.52;
    // derectlly char ar values add declarations kora jai na 
    char temp[100]="rakib";
    strcpy(a.name, temp);
    cout << a.name << endl;
    return 0;
}
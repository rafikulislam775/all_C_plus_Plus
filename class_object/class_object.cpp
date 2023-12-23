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
    student a,b;
    // a.roll = 101;
    // a.cgpa =3.52;
    // // derectlly char ar values add declarations kora jai na 
    // char temp[100]="rakib";
    // // strcpy diye temp er value k a.name e copy kora holo
    // strcpy(a.name, temp);
    // cout << a.name<<" "<<a.roll<<" "<<a.cgpa<<" " << endl;
    // try to input 
    // input er ketre sorasory neya jai
    // name jodi space take tahle input ekta ek linei nite hobe
    /// getline()use korte hobe

     cin.getline(a.name,100);
     cin>>a.cgpa >>a.roll;
     getchar();// enter ta fele dao
     cin.getline(b.name,100);
      cin>>b.cgpa >>b.roll;
    cin>>b.name >>b.cgpa >>b.roll;
    cout << a.name<<" "<<a.roll<<" "<<a.cgpa<<" " << endl;
    cout << b.name<<" "<<b.roll<<" "<<b.cgpa<<" " << endl;
    return 0;
}
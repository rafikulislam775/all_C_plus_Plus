#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a=  new int ;
    cout << "fun" <<a<< endl;
    *a = 200;
    return a;
}
int main(){
    // normal memory  int declarations
    // int x = 0;
    // dynamic int declarations
    // value rakte hole pointer use kore rakte hove
    // int *a = new int;
    // *a = 100;
    // cout<<*a << endl;
    // delete a;// for delete noraml values
    int *p = fun();
    cout<<"main"<<*p<<endl;
    return 0;
}
#include <iostream>
#include<stdio.h>
using namespace std;
// input and output manipulate 
#include<iomanip>

int main(){
{
    double a;
    cin>>a;
    // printf("%0.22lf\n",a);

    // cout<<a <<endl;
    // . er pur koto gor print korte sassi
    cout<<fixed<<setprecision(5)<<a<<endl;

    return 0;
}


}
#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
  // EOF mane holo joto file ses na hobe totokhon input 
  // output dive
//   c programe je babe EOF kora hoye silo
  int a, b;
  // in c 
//   while(scanf("%d %d", &a,&b) != EOF)
//   {
//     printf("%d %d \n", a,b);
//   }
// in c++
while (cin>>a>>b){
    cout<<a<<" "<<b<<"\n";
}
return 0;

}
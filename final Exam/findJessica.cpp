#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x = "Jessica";
    string s;
   getline(cin,s);
  stringstream ss(s);
  string word;
  bool flage =false;
  while(ss>>word){
    if(word==x){
        flage =true;
        break;
    }
  }
   flage?cout<<"YES":cout<<"NO";
  
    return 0;
}
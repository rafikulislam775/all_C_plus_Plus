#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    //int value er getline use korle eta print korbena 
    // jodi cin.ignore(); or getchar(); use tahole print problem ney
    // cin.ignore();
    getchar();
    string s;
    // cin>>s;
    // eta spaces takle porer golo print kore na
    // but cin.getline(s,110); diye space soho print korbe
    //but char s[100]; etar jnn not string er value
    // eta jnn 
    getline(cin,s);
    cout<<x<<endl;
    cout<<s<<endl;
    return 0;
}
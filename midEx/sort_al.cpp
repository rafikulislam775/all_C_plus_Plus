#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;// ekta whole line input neya jai


    while(getline(cin,s))//eta dara joto input dibe sob input nibe 
    {
        s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
        sort(s.begin(),s.end());
        cout << s<<"\n";
    }
    return 0;
}
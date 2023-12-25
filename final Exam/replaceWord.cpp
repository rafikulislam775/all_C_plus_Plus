#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s, x;
    for(int i = 0;i<t;i++)
    {
            cin>>s>>x;
            while(s.find(x)!=-1){
            //s.replace(kon gor teke replace korbe,koyta ,ki replace 
                s.replace(s.find(x),x.length(),"#");  
            }
            cout << s << endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin>> s;
    getline(cin,s);// eta diye spaces soho input neya jai
    
    sort(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
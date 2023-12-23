#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // ekane  arre size holo 26 ta and ar man sob 0
    int arr[26] = {0};
    for(char c:s){
        // cout<<c<<endl;
        arr[c-'a']++;
    }
    for(char i = 'a';i<='z';i++)
    {
        // cout<<arr[i-'a']<<endl;
        for(int j = 0;j<arr[i-'a'];j++)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Freq 
{
public:    
    char value;
    int count;
};

bool cmp(Freq a, Freq b)
{
    if(a.count == b.count){
        return a.value<b.value;
    }else{
      return a.count>b.count;  
    }
    
};

int main()
{
    string s;
    cin >> s;
    Freq arr[26];
    for(char i= 0 ; i<26 ; i++)
    {
        arr[i].value = char(i+'a');
        arr[i].count =0;
    }
    for(char c:s)
    {
        int ascii = int(c-'a');
        arr[ascii].count++;
    }
    sort(arr,arr+26,cmp);
    for(int i = 0 ; i<26;i++)
    {
        for(int j =0 ;j<arr[i].count ;j++)
        {
            cout<<arr[i].value;
        }
        cout << endl;
    //    if(arr[i].count>0)
    //    {
    //     //  cout<<arr[i].value<<" "<<arr[i].count<<endl;
    //     for(int j =0 ;j<arr[i].count ;j++)
    //     {
    //         cout<<arr[i].value;
    //     }
    //     cout << endl;
    //    }
       
    }


    return 0;
}
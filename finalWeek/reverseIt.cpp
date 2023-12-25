#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    string name;
    int clg;
    char c;
    int id;
};

int main()
{
    int t;
    cin >> t;
    student arr[t];
    for(int i=0; i<t; i++)
    {
        cin>>arr[i].name>>arr[i].clg>>arr[i].c>>arr[i].id;
    };

    for(int i=0; i<t/2; i++){
            swap(arr[i].c,arr[t-i-1].c);
    }
    for(int i=0; i<t; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].clg<<" "<<arr[i].c<<" "<<arr[i].id<<endl;
    };
    
    return 0;
}
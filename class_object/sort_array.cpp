#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        
    }
    // now try to sort ascending
    // sort(arr,arr+n);// arr and arrays size
    //descending korte hole greater<int>() likte hobe
    sort(arr,arr+n,greater<int>());
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";

    }
    return 0;
}
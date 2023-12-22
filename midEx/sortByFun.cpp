#include<bits/stdc++.h>
using namespace std;
int*  sort_it(int n)
{
    // cpp te function teke array return kora jai na
    // pointer use kore dynamic array return kora jai
    int*arr = new int[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    return arr;
    
}
int main()
{
    int n;
    cin >>n;
    int *arr = sort_it(n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // must be use need to  delete 
    delete[] arr;
    return 0;
}
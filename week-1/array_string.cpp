// #include<iostream>
using namespace std;
// #include<string>
// for all header files
#include <bits/stdc++.h>
int main(){
      // fo r string ic c++ you need to #include <string>
    char s[100];
    //fgets(s, 100, stdin);
    cin.getline(s, 100);// get line use korte hobe jdi space take 
    cout << s << endl;
    // for loop in c 
    // for(int i=1; i<=10; i++){
    //     cout << i<<"\n";
    // }
    int n;// for array size
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
  
    return 0;
}
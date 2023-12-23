#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin>>x;
    // x = 48 \\ 57
    if(x>='0'&&x<='9'){
        cout<<"IS DIGIT";
       
    }else{
        cout<<"ALPHA\n";
        if(x>='A'&&x<='Z'){
            cout<<"IS CAPITAL";
        }else{
             cout<<"IS SMALL";
        }
    }


    return 0;
}
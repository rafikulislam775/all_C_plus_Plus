#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string s;
    // getline(cin, s);
    // stringstream ss(s);
    // string word;
    // int count = 1;

    // while (ss >> word) {
    //     bool isWord = true;
    //     for (char c : word) {
    //         if (!isalpha(c)) {
    //             isWord = false;
    //             break;
    //         }
    //     }
    //     if (isWord) {
    //         count++;
    //     }
    // }

   // cout << count << endl;
    string s;
    getline(cin, s);
    int count = 0;
    bool flag = false;
    for(char c:s){
        if((c>='a' && c<='z') ||(c>='A' && c<='Z')){
        // if(isalpha(c)){
            if(flag==false){
                count++;
            }
            flag = true;
        }
        else{
            flag = false;
        }
       
    }
     cout<<count<<endl;
    return 0;
}

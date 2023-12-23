#include<bits/stdc++.h>
using namespace std;
int main()
{

//     s+= -> append another string.
// s.append() -> append another string.
// s.push_back() -> add character to the last of the string.
// s.pop_back() -> remove the last character of the string.
// s= -> assign string.
// s.assign() -> assign string.
// s.erase() -> erase characters from the string.
// s.replace() -> replace a portion of the string.
// s.insert() -> insert a portion to a specific position.

    // string a = "hello";
    // string b= "world";
    // // a+=b;
    // a.append(b);
    // a.push_back('a');
    // a.push_back('b');
    // a.pop_back();
    // cout<<a<<" "<<b<<endl;
    string a = "helloworld";
    // a.erase(4);//4 number er por sob delete kore dibe
    a.erase(4,1);//4 number er por 1 ta delete kore dibe
    a.replace(4,2,"rep");//eta 4 teke 2 ta delete kore dibe er pore rep add kore dive
    a.insert(4,"add");
    cout<<  a<<endl;
    return 0;
}
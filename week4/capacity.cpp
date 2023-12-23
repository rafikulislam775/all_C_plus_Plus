#include<bits/stdc++.h>
using namespace std;
int main()
{
//s.size() -> returns the size of the string.
// s.max_size() -> returns the maximum size that string can hold.
// s.capacity() -> returns current available capacity of the string.
// s.clear() -> clear the string.
// s.empty() -> return true/false if the string is empty.
// s.resize() -> change the size of the string.

    string s = "hello";
    // int x = s.size();
    // cout << x << endl;
    // cout << s.max_size() << endl;
    // resize 
    cout << s << endl;
    s.resize(3);
    cout << s << endl;
    //you can resize and also add any thing
    s.resize(10,'r');//helrrrrrrr
    cout << s << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    default:
        cout << "unknown number" << endl;
    }
    return 0;
}
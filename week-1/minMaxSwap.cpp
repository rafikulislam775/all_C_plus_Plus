#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b>>c >> d ;
    int minX = min(a,b);
    int maxX = max(a,b);
   
    cout <<"min value "<< minX << endl <<"max value "<<maxX<< endl;
     //multiple values of max and min { eta u se kote hobe}
    int allmin = min({a,b,c,d});
    int allmax = max({a,b,c,d});
    cout <<"all min value "<< allmin << endl <<"all max value "<<allmax<< endl;
    // lest swap function use
    cout << "that  is swap function\n";
    swap(a,d);
    cout << "a value is " << a << endl << "d value is " << d << endl;

    return 0; 
}
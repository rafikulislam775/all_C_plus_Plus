#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int [3];
    int *b = new int [3];
    for(int i = 0; i < 3; i++){
        cin>> a[i];
        b[i] = a[i];
    }
    delete [] a;// for whole dynamic  array s delete
    // so now you need to resize the array
    a = new int [5];
    for(int i = 0; i < 3; i++){
      a[i]=b[i];
    }
    // a are 4 and 5 number gore kiso diye day
    a[3]=66;
    a[4]=55;

    for(int i = 0; i < 5; i++){
        cout<< a[i] <<" ";
    }

    return 0;
}
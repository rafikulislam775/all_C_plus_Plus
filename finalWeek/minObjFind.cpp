#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0 ; i<n; i++){
        cin.ignore();
        getline(cin, a[i].name);
        // cin >> a[i].name >> a[i].roll >> a[i].marks;
        cin >>a[i].roll >> a[i].marks;
    }
    // int minx = INT_MAX;// min value ber korbo 
    // for (int i = 0 ; i<n; i++){
    //     if(a[i].marks < minx){
    //           minx = a[i].marks;
    //     }
      
    // }
    // cout << minx <<endl;
    Student minSM;
    minSM.marks = INT_MAX;
    for(int i = 0;i<n;i++)
    {
        if(a[i].marks < minSM.marks)
        {
            minSM = a[i];
        }
    }
    cout << minSM.name<<" "<<minSM.roll<<" "<<minSM.marks << endl;
    
    

    return 0;
    
}
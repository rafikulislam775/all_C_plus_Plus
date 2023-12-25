#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int cls;
    char s;//section
    int id;
    int math;
    int english;
};
bool custom(student a, student b){
    if(a.english == b.english&&a.math == b.math){
        return a.id<b.id;
    }else if(a.english == b.english){
        return a.math>b.math;
    }else{
        return a.english > b.english;
    }
}

int main()
{
    int t;
    cin >> t;
    student arr[t];
    for(int i=0; i<t; i++){
        cin >> arr[i].name>>arr[i].cls>>arr[i].s>>arr[i].id>>arr[i].math>>arr[i].english;
    }

    // you need to sort by 
    sort(arr,arr+t,custom);
    for(int i=0; i<t; i++){
        cout << arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].id<<" "<<arr[i].math<<" "<<arr[i].english<<"\n";
    }
    return 0;
}
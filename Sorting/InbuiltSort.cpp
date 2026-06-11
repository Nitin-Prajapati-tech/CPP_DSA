#include<iostream>
using namespace std;

int main(){
    int arr [8] = {2,4,3,6,7,8,9,1};
    sort(arr, arr+8);  // this is accending sort function;
    sort(arr+2 , arr+5);  //sorting in range 2 index to 5index;
    sort(start , end, greater<int>()); //this is decending order sort function;
    //greater <int>() is a comperision function
    print(arr , 8);
    return 0;
}
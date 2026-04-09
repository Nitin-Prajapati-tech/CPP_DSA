#include<iostream>
using namespace std;
int reverseArray(int arr[], int sz){
    int start = 0;
    int end = sz-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}
int maim(){
    int arr[]= {1,2,3,4,5,6,7};
    int sz = 7;
    reverseArray(arr, sz);
    for(int i =0; i<=sz; i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
    


    
}
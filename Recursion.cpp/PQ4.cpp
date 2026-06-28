//find the last occurrence of an element in a vector;
#include<iostream>
#include<vector>
using namespace std;
int lastOccur(vector<int> arr, int target, int i){
    if(i == arr.size()){
        return -1;
    }
int idx = lastOccur(arr, target, i+1);
if(idx == -1 && arr[i] == target){
    return i;
    
}
    return idx;

}
int main(){
    vector<int> arr = {1,2,3,3,3,4};
    cout<<lastOccur(arr , 3, 0)<<endl;//answer = 4;
    return 0;
}
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
void print(int arr[] , int  n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void countSort(int arr[] , int n){
    int freq[100000]; // range;
    int minVal = INT_MAX, maxVal = INT_MIN;
    for(int i= 0; i<n; i++){
        minVal = min(minVal , arr[i]);
        maxVal = max(maxVal , arr[i]);
    }

        //1st step  0(n);
        for(int i =0; i<n; i++){
            freq[arr[i]]++;

        }
        //2nd step - o(range) = max - min;
        int j =0;
        for(int i = minVal; i<=maxVal; i++){
            while(freq[i] > 0){
                arr[j++] = i;
                freq[i]--;
             }
      
    } 
      print(arr , n);
}
    int main(){
    int arr[8] = {3,5,4,2,6,1,7,9};
    int n = sizeof(arr)/sizeof(int);
    countSort(arr , n);
    return 0;
}  

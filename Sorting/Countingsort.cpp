#include<iostream>
using namespace std;

void countSort(int arr[] , int n){
    int freq[100000]; // range;
    int minVal = INT_MIN, maxVal = INT_MAX;
    for(int i= 0; i<n; i++){
        minVal = min(minVal , arr[i]);
        maxVal = miax(maxVal , arr[i]);
    }

        //1st step  0(n);
        for(int i =0; i<n; i++){
            freq[arr[i]]**;

        }
        //2nd step - o(range) = max - min;
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
    int n = sizeof(arr) / sizeof(int);
    countSort(arr , n);
    return 0;
}  

#include <iostream>
using namespace std;
void print(int arr[] , int n){

    for(int i = 0; i<n; i++){
    bool isSwap = false; // there is no swap element;
        cout<< arr[i] << " "<<endl; 
    }
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){ // outer loop;
        for(int j = 0; j<n-i-1; j++){ //inner loop;
            if(arr[j] > arr[j+1]){ //use ">" to sort decending order;
                swap(arr[j], arr[j+1]);
              

            }
        }
        
    }
    print(arr, n);
}
int main(){
    int arr[5] = {5,4,1,3,2};
    //int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    return 0;
}
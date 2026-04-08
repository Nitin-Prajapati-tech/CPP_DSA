#include<iostream>
#include<climits> // INT_MAX is the part of climits header file;
using namespace std;
int main(){
    /*//print smallest array;
    int nums[] = {12, 23, -34, 35, 24};
    int size = 5;
    
    
    int smallest = INT_MAX; //+infinate


    for(int i = 0; i<size; i++){
        //min function;
        //smallest = min(num[i],smallest); its use then remove if blockes;

        if(nums[i]<smallest){
            smallest = nums[i];
        }
    }
    cout << "smallest = "<<smallest<<endl;*/


    // print largest array;
    int nums[] = {23,34,56,-35,22};
    int size = 5;
    int largest = INT_MIN;
    for(int i=0; i<size; i++){
        if(largest<nums[i]){
            largest = nums[i];
        }
    }
    cout << "largest = "<<largest <<endl;

    return 0;

}
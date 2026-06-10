#include<iostream>
using namespace std;
int main(){
    //linear search;
    int arr[] = {12, 23, 45 ,67, 78 };
    int size = 5;
    int key = 67;
    for(int i = 0; i<size; i++){
        if(arr[i]==key){
            cout<<"element is found = "<<key <<endl;
            return 1;
            
        }
    }
    cout << "element is not found "<<endl;
    return -1;
}
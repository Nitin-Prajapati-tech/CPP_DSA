#include<istream>
#include<climits> // INT_MAX is the part of climits header file;
using namespace std;
int main(){
    //print smallest array;
    int nums[] = {12, 23, -34, 35, 24};
    int size = 5;
    
    
    int smallest = INT_MAX; //+infinate
    
    for(int i = 0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
    }
    cout << "smallest = "<<smallest<<endl;
    return 0;

}
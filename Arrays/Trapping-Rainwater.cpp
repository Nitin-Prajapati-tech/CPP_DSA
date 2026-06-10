#include<iostream>
using namespace std;
void trap(int *height , int n){
    int leftMax[20000], rightMax[20000];
    
    leftMax[0] = height[0];
    cout<<leftMax[0] <<",";
    rightMax[n-1] = height[n-1];
    cout<<rightMax[n-1]<<",";
    for(int i = 1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], height[i-1]);
        cout<<leftMax[i]<<",";
    }
    for(int i = n-2; i>=0; i--){
        leftMax[i] = max(leftMax[i+1], height[i+1]);
        cout<<leftMax[i]<<",";
    }
    cout<<endl;
}
int main(){
    int trap[7] = {4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(int);
    trap(height, n);
    return 0;
}
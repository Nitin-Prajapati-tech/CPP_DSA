//create 2D vector;

#include<iostream>
#include<vector>
using namespace std; 
int main(){

//vector<vector<int>> matrix = {{1,2,3,},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix = {{1,2,3,},{4,5},{6}};// in vector "we are take less cols to  rows"; rows = 3 and cols = 3,2,1
for(int i = 0; i<matrix.size(); i++){
    for(int j = 0; j<matrix[i].size(); j++){
        cout << matrix[i][j] << " ";
    }
    cout << endl;

}

return 0;
}
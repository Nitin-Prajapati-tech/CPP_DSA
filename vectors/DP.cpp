//create 1D dyanmic array;


#include<iostream>
using namespace std;
int main(){
/*int size;
cin>> size;
int *arr = new int [size]; //create a size of array (new keyword is a cpp keyword which is use to new memory allocate);
int x = 1;
for(int i =0; i<size; i++){
    arr[i] = x;
    cout<<arr[i]<<" ";
    x++;

}
cout << endl;
return 0;*/




//2D dyanmic array;

int rows, cols;
cout << "enter rows :";
cin>>rows;
cout << "enter cols :";
cin>> cols;
//creation of 2D arrray
int* *matrix =  new int*[rows];
for(int i = 0; i<rows; i++){
    matrix[i] = new int[cols];

}
//data stored;
int x=1;
for(int i =0; i<rows; i++){
    for(int j = 0; j<cols; j++){
        matrix[i][j] = x++;
        cout<< matrix[i][j] << " "; 
    }
    cout << endl;

}
//find the value matrix[i][j];
cout << matrix[2][2] << endl;
cout<<*(*(matrix+2) +2 )<<endl;
return 0;
}



#include<iostream>
using namespace std;
int main(){
    //integer data type
    int age = 25;
    int marks = -91;
    cout<<"size of int = "<<sizeof(int)<<endl;

    //character data type
    char grade = 'A';// char datatype(@,a,#) is used to store single character and it is enclosed in single quotes
    cout<<"size of char = "<<sizeof(char)<<endl;//take 1 byte of memory
    

    //boolean data type
    bool isAdult = true;// bool datatype is return ture or flase value
    cout<<"size of bool = "<<sizeof(bool)<<endl;//take 1 byte of memory
    
    
    
    //float data type
    float pi = 3.14; // float is a data type that can store decimal numbers. It is
    // its precision have print up to 7 numbers
    cout << "the value of pi is = " << pi << endl;


    //double float data type
    float a = 99.99; // float is a data type that can store decimal numbers. It is
    // its precision have print up to 14 numbers
    cout << "the value of a is = " << a << endl;
    return 0;

}
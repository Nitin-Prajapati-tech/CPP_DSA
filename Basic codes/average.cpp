//calculate average of marks;
#include<iostream>
using namespace std;
int main(){
    int maths;
    int physics;
    int chemistry;
    cout<<"Enter the marks of math :";
    cin>>maths;

    cout<<"Enter the marks of physics :";
    cin>>physics;
    cout<<"Enter the marks of chemistry :";
    cin>>chemistry;
    int avg = (maths+physics+chemistry)/3;//if we are divide integer number ot integer number  then the return output is also integer number
    cout<<"the average marks is = "<<avg<<endl;
    return 0;

}

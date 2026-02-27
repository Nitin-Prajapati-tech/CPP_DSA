//claculate average of marks;
#include<iostream>
using namespace std;
int main(){
    int maths;
    int physics;
    int chemistry;
    cout<<"Enetr the marks of maths :";
    cin>>maths;

    cout<<"Enetr the marks of physics :";
    cin>>physics;
    cout<<"Enetr the marks of chemistry :";
    cin>>chemistry;
    int avg = (maths+physics+chemistry)/3;//if we are divide integer number ot integer number  then the return output is also integer number
    cout<<"the average marlks is = "<<avg<<endl;
    return 0;

}
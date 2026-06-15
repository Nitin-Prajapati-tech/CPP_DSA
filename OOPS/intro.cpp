//class and object;

#include<iostream>
using namespace std;
class Student {
    //properties;
    string Name;
    float Cgpa;

    //Methods;
    void getpercentage(){
        cout<<(Cgpa * 10)<<"\n";
    }
};
int main(){
    Student s1; // object
    cout << sizeof(s1)<<endl;  // assign 32 bits;
    return 0;
}
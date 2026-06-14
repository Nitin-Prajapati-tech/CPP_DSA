//introduction of vectors;

#include<iostream>
#include<vector>
using namespace std;
int main(){
  /*  vector<int> vec1;
    vector<int> vec2 = {1,2,3,4,5};
    vector<int> vec3(5,-1);
    cout<<vec1.size()<<"\n";
    cout<<vec2.size()<<"\n";
    cout<<vec3.size()<<"\n";

    // Access the element of vetors;
    for(int i =0; i<vec3.size(); i++){
        cout<<vec3[i] <<" "<<endl;
    }*/


    //Implementation of vectors in memory;
     
    vector<int> vec = {1,2,3,4};
    cout << "size : "<<vec.size()<<"\n";
    cout<<"capacity : "<<vec.capacity() << "\n";
     //other element push in vector;
     vec.push_back(5); //this this push_back function to add  element in vectos;
     // pop_back function is ude to delete element;
     cout << "size : "<<vec.size()<<"\n";
     cout<<"capacity : "<<vec.capacity() << "\n";

    return 0;
}
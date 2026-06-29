// print X to the power N;
#include<iostream>
using namespace std;
int pow(int x, int n){ //o(logn);
    if(n==0){
        return -1;
    }
    int halfpow = pow(x, n/2);
    int halfpowSquare = halfpow * halfpow;
    if(n%2 != 0){//n iis odd;
        return x*halfpowSquare;
    }
    return halfpowSquare;
}
int main(){
    cout<<pow(2,10)<<endl;
    return 0;
}
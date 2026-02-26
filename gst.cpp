//calculte gst
#include<iostream>
using namespace std;
int main(){
    float pencost, pencilcost, erasercost;
    cin>>pencost;
    cin>>pencilcost;
    cin>>erasercost;
    float totalcost = pencost+ pencilcost+erasercost;
    cout<<"total = "<<totalcost<<endl;
    cout<<"total with gst ="<<(totalcost +(0.18*totalcost))<<endl;
    return 0;
}

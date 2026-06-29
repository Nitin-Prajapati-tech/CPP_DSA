//Remove duplicates in string;
#include<iostream>
#include<string>
using namespace std;
void removeDuplicates(string str,string ans, int i, int map[]){
    if(i == str.size()){
        cout<<"ans : "<<ans<<endl;
        return;
    }
    int mapIdx = (int)(str[i]-'a');
    if(map[mapIdx]){//duplicates;
        removeDuplicates(str , ans, i+1, map);
    }else{
        map[mapIdx] = true;
        removeDuplicates(str, ans+str[i], i+1, map);
    }
}
int main(){
    string str = "nitin";
    string ans = "";
    int map[26]  = {false};
    removeDuplicates(str, ans, 0, map);
    return 0;
}
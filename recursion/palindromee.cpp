#include<bits/stdc++.h>
using namespace std;
bool chick(string str,int s,int e){
    if(s>=e){
        return true;
    }
    if(str[s] == str[e]){
        return chick(str,s+1,e-1);
    }else{
        return false;
    }
}
int main(){
    string str = "apabbcbbapa";
    if(chick(str,0,str.size()-1)){
        cout<<"YEs";
    }else{
        cout<<"No";
    }
}
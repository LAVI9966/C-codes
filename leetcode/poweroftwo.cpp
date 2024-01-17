#include<bits/stdc++.h>
using namespace std;
bool poweroftwo(int n){
    for(int i=0;i<INT_MAX;i++){
        if(n == pow(2,i)){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    poweroftwo(n);
}
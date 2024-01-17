#include<bits/stdc++.h>
using namespace std;
int powers(int a,int b){
    if(b == 0)
        return 1;
    
    if(b == 1)
        return a; 

    int ans = powers(a , b/2);

    if(b % 2 == 0){
        return ans*ans;
    }else{
        return a*ans*ans;
    }
}
int main(){
    int a = 3, b = 10;
    cout<<powers(a,b);
}
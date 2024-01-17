#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n > 3 || n == 1){
    for(long long i = n-1; i > 0; i = i-2){
        cout<<i<<" ";
    }
    for(long long i = n; i > 0; i = i-2){
        cout<<i<<" ";
    }
    }else {
        cout<<"NO SOLUTION ";
    }
    
}
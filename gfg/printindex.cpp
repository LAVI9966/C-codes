#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[10000];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==i){
            cout<<i<<" ";
        }
    }
}
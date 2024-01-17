#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    long long  count=1;
    for(long long  i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long long  i=0;i<n;i++){
        for(long long  j=0;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(long long  i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    cout<<count;
}
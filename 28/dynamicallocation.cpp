#include<bits/stdc++.h>
using namespace std;
int update(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;

}
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<update(arr,n);
    delete []arr;
}
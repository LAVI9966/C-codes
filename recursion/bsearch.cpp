#include<bits/stdc++.h>
using namespace std;
void print(int *arr , int s , int e ){
    int mid = (s+e) / 2;
    cout <<"S-->"<<s<<" MID-->"<<mid<<" E-->"<<e<<endl;
    for(int i = s ; i<e ;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool bsearch(int arr[] , int s ,int e ,int key){
    if(s > e){
        return false;
    }
    print(arr,s,e);
    int mid = (s+e) / 2;
    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] > key){
        return bsearch(arr,s,mid-1,key);
    }
    if(arr[mid] < key){
        return bsearch(arr,mid+1,e,key);
    }
}
int main(){
    int arr[10] = { 1,3,4,9,7,11,33,44,99,100};
    int s = 0;
    int e = 10;
    if(bsearch(arr,s,e,9)){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}
#include<bits/stdc++.h>
using namespace std;
bool search(int arr[] , int size , int key){
    if( size == 0){
        return 0;
    }
    if( arr[0] == key ){
        return true;
    }else{
    search(arr+1 , size-1 , key);
}}
int main()
{
    int arr[1000]={1,2,3,4,5,6,7,8,9};
    int size = 9;
    int key = 9;
    if(search(arr,size,key)){
        cout<<"FOUND"<<endl;
    }else{
        cout<<"NOT FOUND"<<endl;
    }
    return 0;
}
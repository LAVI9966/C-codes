#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int arr[] , int s ,int e, int key){
    if(s > e){
        return 0;
    }
    int mid = ( s + e ) /2;
    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] > key ){
        return binarysearch(arr , s , mid - 1 , key);
    }
    if(arr[mid] < key){
        return binarysearch(arr , mid + 1 , e , key);
    }
}
int main()
{
    int arr[10000]={1,3,4,6,7,9,11,33,44,66,77,99,100};
    int size = 13;
    int s = 0;
    int e= size - 1;
    int key = 54;
    if(binarysearch(arr,s,e,key)){
        cout<<"PRESENT"<<endl;
    }else{
        cout<<"NOT PRESENT"<<endl;
    }

    return 0;
}
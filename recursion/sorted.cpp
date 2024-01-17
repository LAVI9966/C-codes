#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[] , int n){
    if(n == 0 || n == 1)
    return true;

    if(arr[0] > arr[1])
    return false;

    return sorted(arr+1,n-1);
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,99};
    if(sorted(arr,10)){
        cout<<"Sorted";
    }else{
    cout<<"not";
    }
}
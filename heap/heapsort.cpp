
#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i){
    int large = i;
    int left = i*2;
    int right = i*2+1;

    if(left <= n && arr[large] < arr[left]){
        large = left;
    } 
    if(right <= n && arr[large] < arr[right]){
        large = right;
    }
    if(large != i){
        swap(arr[i],arr[large]);
        heapify(arr,n,large);
    }
}
void heapsort(int arr[] , int n){
    int t = n;
    while(t > 1){
        swap(arr[1],arr[t]);
        t--;

        heapify(arr,n,1);
    }
}
int main(){
    int arr[10] = {5,4,1,2,9,7,6,3,4,5};
    int n = 10;
    for(int i = n / 2;i>0;i--){
        heapify(arr,n,i);
    }
    heapsort(arr,n);
    for(int i=0;i<=n;i++){
        cout<<arr[i] <<" ";
    }
}
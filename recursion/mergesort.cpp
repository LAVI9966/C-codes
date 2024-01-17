#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e){
    int mid = (s+e)/2;

    int len1 = mid - s +1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mi = s;

    for(int i=0;i<len1;i++){
        first[i] = arr[mi++];
    }
    for(int j=0;j<len2;j++){
        second[j] = arr[mi++];
    }
    int i=0,j=0;
    mi=s;
    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[mi++] = first[i++];
        }else{
            arr[mi++] = second[j++];
        }
    }
    while(i<len1){
        arr[mi++] = first[i++];
    }
    while(j<len2){
        arr[mi++] = second[j++];
    }

}
void mergesort(int *arr,int s,int e){
    if(s >= e){
        return ;
    }
    int mid = (s+e)/2;

    mergesort(arr,0,mid);
    mergesort(arr,mid+1,e);

    merge(arr,s,e);
}
int main(){
    int arr[10]={5,4,9,3,5,7,6,1,99,4};
    mergesort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}
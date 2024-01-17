#include<bits/stdc++.h>
using namespace std;
int partition(int *arr,int s,int e){
    int pivit = arr[s];

    int c = 0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivit)
        c++;
    }

    int pivitindex = s + c;
    swap(arr[pivitindex],arr[s]);
    int i = s;
    int j = e;
    while(i < pivitindex && j > pivitindex){
        while(arr[i] < pivit){
            i++;
        }
        while(arr[j] > pivit){
            j--;
        }
        if(i < pivitindex && j > pivitindex){
            swap(arr[i++],arr[j--]);
        }
    }

}
void quicksort(int *arr,int s,int e){
    if(s >= e){
        return ;
    }

    int p = partition(arr,s,e);

    quicksort(arr,s,p-1);
    
    quicksort(arr,p+1,e);
}
int main(){
    int arr[10]={2,9,7,4,6,8,5,1};
    quicksort(arr,0,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}
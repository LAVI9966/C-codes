#include<bits/stdc++.h>
using namespace std;
class maxhep{
    int arr[100];
    int size=0;
    public:
    void insert(int data){
        size=size+1;
        int index=size;
        arr[index]=data;

        while(index>1){
            int parent =  index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }else{
                return ;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void deletformhep(){
        if(size==0){
            return;
        }

        arr[1]=arr[size];
        size--;

        int i=1;
        while(i<size){
            int leftindex = 2*i;
            int rightindex = 2*i+1;

            if(leftindex < size && arr[leftindex] > arr[i]){
                swap(arr[leftindex],arr[i]);
                i=leftindex; 
            }else 
            if(rightindex < size && arr[rightindex] > arr[i]){
                swap(arr[rightindex],arr[i]);
                i=rightindex;
            }else{
                return;
            }
        }

    }

};
void heapify(int arr[] ,int n , int i){
    int largest =i;
    int left = i*2;
    int right =i*2+1;
    
    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
int main(){
    maxhep h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletformhep();
    h.print();
    int arr[]={-1,50,55,53,52,54};
    int n=sizeof(arr)/sizeof(arr[1])-1;
    for(int i = n/2 ;i>0;i--){
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
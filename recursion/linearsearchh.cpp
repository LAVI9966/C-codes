#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    cout<<"size is "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
bool lineara(int *arr , int n , int target){
    print(arr,n);
    if(n == 0)
    return 0;

    if(n > 0){
        if(arr[0] == target){
           return true; 
        }else{
            lineara(arr+1 , n-1 ,target); 
        }
    }
}   
int main(){
    int arr[8] = {4,6,7,2,1,69,5};
    if(lineara(arr,7,6)){
        cout<<"yeas";
    }else{
        cout<<"no";
    }
}

#include<bits/stdc++.h>
using namespace std;
int finddublicate(int arr[],int n){
    for(int i = 0; i < n; i++){
        for( int j= i + 1; j < n ; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" is dublicate";
            }
        }
    }
}
int main()
{  
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    finddublicate(arr,n);
    return 0;
}
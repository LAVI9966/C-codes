#include<bits/stdc++.h>
using namespace std;
int suum(int *arr , int n){
    if(n == 0){
        return 0;
    }
    if(n == 1)
    return arr[0];

    int sum = arr[0] + suum(arr+1 , n-1);
    return sum;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = suum(arr,5);
    cout<<sum;
}
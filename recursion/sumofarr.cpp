#include<bits/stdc++.h>
using namespace std;
int sum(int *arr , int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    arr[1] = arr[1] + arr[0];
    int ans = 0;
    ans = ans + sum(arr + 1 , size - 1);
    return ans;
}
int main()
{
    int arr[10000] = {2,4,6,8};
    int size = 3;
    int ans = sum( arr , size );
    cout<<ans;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
int lagankipro(int arr[] , int size ){
    int i = 0;
    int j = 1;
    if(size == 0 ){
        return 0;
    }
    if(arr[i]+arr[i+2] == arr[j]+arr[j+2]){
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
        ans.push_back(arr[i+1]);
        ans.push_back(arr[j+1]);
        return 1;
    }else{
        lagankipro(arr+1,size-1);
        
    }

}
int main(){
    int arr[10000]={4,5,1,2,3,2};
    int size=6 ;
    lagankipro(arr,size);
    for(int l = 0 ;l< ans.size();l++){
        cout<<ans[l]<<" ";
    }
}
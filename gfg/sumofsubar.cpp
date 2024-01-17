#include<bits/stdc++.h>
using namespace std;
vector<int> subarr(int arr[] , int n ,int sum ){
    int summ;
    vector<int> ans;
    for(int i=0;i<n;i++){
        summ=0;
        for(int j=i ;j<n ;j++){
            summ=summ+arr[j];
            if(summ==sum){
                ans.push_back(i+1);
                ans.push_back(j+1);
                //cout<<i+1<<endl;
                //cout<<j+1<<endl;
                return ans;
            }
        }

    }
}
int main(){
    int arr[10000];
    cout<<"ENTER "<<endl;
    int n;
    cin>>n;
    cout<<"ENTER ELE "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"enter sum to find "<<endl;
    cin>>sum;
    vector<int> ans;
    ans=subarr(arr,n,sum);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    }
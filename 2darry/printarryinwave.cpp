#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ans;
    int n=3,m=3;
    int arr[n][m];
    cout<<"Enter arry elements \n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"THIS IS YOUR AARR BEFOR WAVE \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }


    cout<<"now this is in the wave form \n";
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<"  ";
                ans.push_back(arr[i][j]);

            }cout<<endl;
        }else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[i][j]<<"  ";
                ans.push_back(arr[i][j]);
            }cout<<endl;

        }
    }
    for(int i=0;i<ans.size();i++){
    cout<<ans[i];
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n;
    int arr[10000];
    while(t--){
    int count=0;
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>1000){
            count++;
        }
    }cout<<count<<endl;
    }
	return 0;
}

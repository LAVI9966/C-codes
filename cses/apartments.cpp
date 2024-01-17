#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long a[n],b[m];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long i=0;i<m;i++){
        cin>>b[i];
    }
    long long count=1;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
        if(((a[i]-k)>b[j])&&((a[i]+k)<b[j])){
            count++;
            a[i]=0;
            b[j]=0;
        }
        }
    }
    cout<<count;
}
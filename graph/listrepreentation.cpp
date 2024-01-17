#include<iostream>
#include<vector>
using namespace std;
const int o=1e3;
vector<int>adj[o];
int main(){
    int n;
    cout<<"Enter the number of nodes \n";
    cin>>n;
    int m;
    cout<<"Enter the  number of edges \n";
    cin>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cout<<"Enter Both edges\n";
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    cout<<"PRINTING-- >"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Element if adj["<<i<<"] ";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

}
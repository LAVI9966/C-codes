#include<bits/stdc++.h>
using namespace std;
const int n =1e3;
vector<int>visited(1000,false);
vector<int> adjlist[n];
void dfs(int start,vector<int>&ans){
    
    visited[start]=true;
    ans.push_back(start);
    for(int poppop :adjlist[start]){
        if(visited[poppop]==false){
            dfs(poppop,ans);
        }
    }
    
}
int main(){
    cout<<"ENTER VERTEX OF EDGES"<<endl;
    int vertex,edges;
    cin>>vertex>>edges;
    for(int i=0;i<edges;i++){
        cout<<"ENTER THE DES OR SRC"<<endl;
        int v1,v2;
        cin>>v1>>v2;
        adjlist[v1].push_back(v2);
        adjlist[v2].push_back(v1);
    }
    cout<<"ENTER FIRST NODE"<<endl;
    int start;
    cin>>start;
    vector<int>ans;
    dfs(start,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
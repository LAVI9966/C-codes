#include<bits/stdc++.h>
using namespace std;
vector<int>adjlist[10000];
void bfs(int start){
    queue<int>q;
    vector<bool>visited(10000,false);
    vector<int>ans;
    visited[start]=1;
    q.push(start);
    while(!q.empty()){
        int val = q.front();
        q.pop();
        ans.push_back(val);
        for(int i=0;i<adjlist[val].size();i++){
            int s = adjlist[val][i];
            if(!visited[s]){
                visited[s]=1;
                q.push(s);
            }
        }
    }
    cout<<endl<<"BFS search \n"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int vertex;
    int edges;
    cout<<"Enter vertex and edges \n";
    cin>>vertex>>edges;
    for(int i=0;i<edges;i++){
        int src,des;
        cout<<"Enter src and des\n";
        cin>>src>>des;
        adjlist[src].push_back(des);
        adjlist[des].push_back(src);
    }
    cout<<"Enter the starting node"<<endl;
    int start;
    cin>>start;
    
    cout<<endl<<"Printing the list \n"<<endl;
    for(int i=1;i<=vertex;i++){
        cout<<"adjlist["<<i<<"] : ";
        for(int j=0;j<adjlist[i].size();j++){
            cout<<adjlist[i][j]<<" ";
        }
        cout<<endl;
    }
    bfs(start);
}
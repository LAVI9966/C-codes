#include<iostream>
#include<list>
#include<queue>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
const int n=1e3;
void printlist(unordered_map<int,list<int>> adjlist){
    cout<<"Printing-->\n";
    for(unordered_map<int,list<int>>::iterator it = adjlist.begin();it!=adjlist.end();it++){
        int vertex = it->first;
        list<int> negi =it->second;
        
        cout<<vertex <<" : ";
        for(list<int>::iterator pt = negi.begin();pt!=negi.end();pt++){
            int val = *pt;
            cout<<val<<" ";
        }
        cout<<endl;
    }
}
void starte(){

}
void MAINBFS(unordered_map<int,list<int>> &adj,unordered_map<int,bool> &visited,vector<int> &ans,int node){
       queue<int> que;
       que.push(node);
       visited[node]=1;
       while(!que.empty()){
        //take front node
        int val = que.front();
        que.pop();
         //store  fronte node
         ans.push_back(val);

         //traverse all node of neighbours
         for(auto i:adj[val]){
            if(!visited[i]){
                que.push(i);
                visited[i]=1;
            }
         }
       }
}
vector<int> BFS(unordered_map<int,list<int>> adj,int vertex){
    vector<int>ans;
    unordered_map<int,bool>visited;
    
    //traverse all node
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            MAINBFS(adj,visited,ans,i);
        }
    }
    return ans;
}
int main(){
    unordered_map<int,list<int>> adjlist;
    int n;
    cout<<"Enter number of nodes\n";
    cin>>n;
    int m;
    cout<<"Enter number of edges\n";
    cin>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cout<<"Enter edge\n";
        cin>>v1>>v2;
        adjlist[v1].push_back(v2);
        adjlist[v2].push_back(v1);
    }
    vector<int>ans = BFS(adjlist,n);
    printlist(adjlist);
    cout<<"NOW the bfs"<<endl;
    sort(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<ans[i]<<" ";
    }
    
}
#include<iostream>
#include<vector>
using namespace std;
const int o=1e3;
int mat[o][o];
vector<int> adj[o];
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
        mat[v1][v2]=1;
        mat[v2][v1]=1;
    }
    cout<<"THIS IS THE MATRIX"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}
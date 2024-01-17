#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter row and col \n";
    cin>>row>>col;
    //creation 
    int **arr = new int *[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }
    cout<<"Enter element "<<endl;
    //taking input 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[row][col];
        }
    }

    cout<<"printing "<<endl;
    //printing 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[row][col]<<" ";
        }
    }

}
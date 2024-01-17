#include<bits/stdc++.h>
using namespace std;

bool search(int arr[][4], int row,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;


}
int main(){
    //hardcore
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    
    //hardcore row wise
    //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    int arr[3][4];
    //input of 2d

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    //output of 2d

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    int key;
    cout<<"Enter the element to search \n";
    cin>>key;
    if(search(arr,3,key)){
        cout<<"PRESENT\n";
    }else{
        cout<<"NOT PRESENT\0";
    }

}
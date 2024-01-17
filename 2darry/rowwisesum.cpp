#include<bits/stdc++.h>
using namespace std;
void sumrowwise(int arr[][3],int row){
    int sum = 0;
    int max = INT_MIN;
    int index = -1;
    for(int i = 0;i < row; i++){
        for(int j = 0 ;j<3; j++){
            sum = sum + arr[i][j];
        }
        cout<<"The sum of row no "<<i<<" is "<<sum<<endl;
        if(sum>max){
            max=sum;
            index=i;
        }
    }
    cout<<"The MAX sum of sum of all rows is "<<max<<" at the index "<<index<<endl;
}
int main(){
    int arr [3] [3] = {1,2,3,4,5,6,7,8,9};
    sumrowwise(arr,3);
}
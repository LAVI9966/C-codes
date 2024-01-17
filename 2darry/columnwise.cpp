#include<bits/stdc++.h>
using namespace std;
int sumcolwise(int arr[][3],int row){
    int max = INT_MIN;
    int sum = 0;
    int index = -1;
    for(int i = 0;i < row; i++){
        for(int j = 0 ;j<3; j++){
            sum = sum + arr[j][i];
        }
        cout<<"The sum of col no "<<i<<" is "<<sum<<endl;
        if(sum>max){
            max=sum;
            index=i;
        }
    }
    cout<<"The max of sum of col's is "<<max<<" at the index "<<index<<endl;
}
int main(){
    int arr [3] [3] = {1,2,3,4,5,6,7,8,9};
    sumcolwise(arr,3);
}
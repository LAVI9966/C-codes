#include<iostream>
using namespace std;
class buble{
    public:
    int n;
    int arr[100],i=0,j=i;
    void input();
    void bublesort();

    

};
void buble::input(){
    cout<<"Enter no of elements \n";
    cin>>n;
    cout<<"entre elements \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void buble::bublesort(){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    cout<<"print =---->\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    buble bs;
    bs.input();
    bs.bublesort();


}
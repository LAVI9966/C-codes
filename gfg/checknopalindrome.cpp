#include<iostream>
using namespace std;
bool palindrome(int n){
    int reverse=0;
    int reminder;
    int p=n;

    while(n>0){
        reminder=n%10;      
        reverse=reverse*10+reminder;    
        n/=10;    
    }
    if(reverse==p){
    cout<<reverse<<" if "<<endl;
    }else{
    cout<<reverse<<" else "<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(palindrome(arr[i])){

        }else {
            return 0;}

        
    }
    return 1;

}
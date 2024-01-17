#include<iostream>
using namespace std;
void printtail(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printtail(n-1);
}
void printhead(int n){
    if(n==0){
        return;
    }
    printhead(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    printtail(n);
    cout<<endl<<endl;
    printhead(n);
}
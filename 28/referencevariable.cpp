#include<iostream>
using namespace std;
int main(){
    int i=10;
    //here we give reference of i to j
    int &j=i;
    cout<<i<<endl;
    cout<<j<<endl;
    i++;
    cout<<endl;
    cout<<i<<endl;
    cout<<j<<endl;
    j++;
    cout<<endl;
    cout<<i<<endl;
    cout<<j<<endl;
    
}
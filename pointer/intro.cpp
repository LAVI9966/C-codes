#include<bits/stdc++.h>
using namespace std;
int main(){
    float num=5.1;
    num++;
    cout<<num<<endl;

    //declaring pointer 
    float *ptr = &num;

    cout<<"NUM is "<<num<<endl;
    cout<<"ptr is "<<ptr<<endl;
    cout<<"*ptr is "<<*ptr<<endl;
    cout<<endl<<endl;
    cout<<"size of num is "<<sizeof(num)<<endl;
    cout<<"size of ptr is "<<sizeof(ptr)<<endl;
    cout<<"size of *ptr is "<<sizeof(*ptr)<<endl;
}
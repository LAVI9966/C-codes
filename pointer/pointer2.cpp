#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    int *ptr = &arr[0];
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(&arr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    cout<<"---------------------------"<<endl;

    int ar[10]={0};
    int *p = &ar[0];
    cout<<" 1 "<<*p<<endl;
    cout<<" 2 "<<&p<<endl;
    cout<<" 3 "<<p<<endl;
    cout<<" 4 "<<&ar[0]<<endl;
    p++;
    cout<<" 5 "<<p<<endl;
    cout<<" 6 "<<&p<<endl;
    cout<<" 7 "<<*p<<endl;

    
}
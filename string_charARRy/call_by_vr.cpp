#include<iostream>
using namespace std;
void swapp(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;

}
int main(){
    int a=4,b=5;
    cout<<"A is "<<a<<" and b is "<<b<<endl;
    swapp(&a,&b);
    cout<<"A is "<<a<<" and b is "<<b<<endl;
}
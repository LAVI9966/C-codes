#include<bits/stdc++.h>
using namespace std;
class lavish{
    int a,b;
    public:
    void setdata(int a,int b){
        cout<<"Enter data "<<endl;
        this->a=a;
        this->b=b;
    }
    lavish operator+(lavish obj){
        lavish obj1;
        obj1.a=a+obj.a;
        obj1.b=b+obj.b;
        return obj1;
    }
    void print(){
        cout<<"A IS "<<a<<" B IS "<<b<<endl;
    }
};
int main(){
    lavish o,o1,o2;
    o.setdata(54,5);
    o1.setdata(5,55);
    o2=o+o1;
    o2.print();


}
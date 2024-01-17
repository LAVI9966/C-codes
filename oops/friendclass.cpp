#include<bits/stdc++.h>
using namespace std;
class myclass1{

    int a,b;
    public:
    friend class myclass2;
    myclass1(int a,int b){
        this->a=a;
        this->b=b;
    }
};
class myclass2{
    public:
    void show(myclass1 obj){
        cout<<"Sum is "<<obj.a+obj.b;
    }
};
int main(){
    myclass1 obj(4,5);
    myclass2 obj1;
    obj1.show(obj);
}
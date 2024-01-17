#include<bits/stdc++.h>
using namespace std;
class check{
    int a;
    int b;
    public:
    void setdata(int a, int b){
        this->a=a;
        this->b=b;
    }
    friend void fun(check);
};
void fun(check obj){
    cout<<"Sum of a+b is -"<<obj.a+obj.b;
}
int main(){
    check a;
    a.setdata(5,5);
    fun(a);

}
#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    // void functoin(){
    //     cout<<"Function from class a is executed "<<endl;
    // }
    //thhis is creating amubigity so use virtual function
    virtual void functionn(){
        cout<<"Function from class a is executed "<<endl;
    }
};
class b : public a{
    public:
    void functionn(){
        cout<<"Function from class b is executed "<<endl;
    }
};

int main()
{
    b obj1;
    obj1.functionn();//this will derived class fuction 
        return 0;
}
#include<bits/stdc++.h>
using namespace std;
class A{
    int x,y;
    public:
    A(int x1 , int y1 ){
        x=x1;
        y=y1;
    }
    int get_x(){
        return x;
    }
    int get_y(){
        return y;
    }

};
int main(){
    A lavish(10,8);
    int x = lavish.get_x();
    int y = lavish.get_y();
    cout << "The value of x is " << x <<endl;
    cout << "The value of y is " << y <<endl;
    return 0;
}
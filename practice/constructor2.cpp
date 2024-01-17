#include<bits/stdc++.h>
using namespace std;
class coordinate{
    int a;

    public:
    coordinate(int t){
        a = t;
    } 
    coordinate(coordinate & x){
        a = x.a;
    }
    void get(){
        cout << a << endl;
    }
};
int main(){
    int x;
    cout << "Enter the value of x ";
    cin  >> x;
    coordinate lavish1(x);
    coordinate lavish2(lavish1);
    cout<<"The value of a is ";
    lavish1.get();
    cout<<"The value of a after copy is ";
    lavish2.get();
    return 0;
}
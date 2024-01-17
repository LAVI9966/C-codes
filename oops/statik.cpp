#include<bits/stdc++.h>
using namespace std;
class chek{
    int x;
    static int y;
    public:
    chek(int c){x=c;}
    public:
    void show(){
        cout<<"x is "<<x<<" y is "<<y<<endl;
    }
    static void ch(int t){
        y=t;
    }

};
int chek::y = 10;
int main(){
    chek o(5);
    o.show();
    o.ch(12);
    o.show();
}
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    queue<int> p;
    p.push(10);
    p.push(20);
    p.push(40);
    p.push(80);
    cout<<p.size()<<endl;
    cout<<p.front()<<endl;
    p.pop();
    cout<<p.size()<<endl;
    cout<<p.front()<<endl;
    p.pop();
    cout<<p.size()<<endl;
    cout<<p.front()<<endl;
    p.pop();
    cout<<p.size()<<endl;
    cout<<p.front()<<endl;
    p.pop();
    cout<<p.size()<<endl;
    cout<<p.empty();
}
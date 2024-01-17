#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    //push means insert an element
    s.push(1);
    s.push(2);
    s.push(5);
    s.push(10);
    //top print the top most elements
    cout<<s.top();
    //pop delet the most comon element
    s.pop();
    cout<<s.top()<<endl;;
    cout<<s.size();
    //0 means not empty or 1 means empty
    cout<<s.empty()<<endl;

}
#include<bits/stdc++.h>
using namespace std;
class stackk{
    public:
    int *arr;
    int size;
    int top;
    stackk(int size){
        arr = new int[size];
        this->size=size;
        top=-1;
    }
    void push(int ele){
        if(size-top > 1){
            top++;
            arr[top]=ele;
        }else{
            cout<<"Stack is overflow \n";
        }
    }
    void pop(){                             
        if(top>=0){
            top--;
        }else{
            cout<<"Stack is underflow\n";
        }

    }
    int peek(){
        if(top>=0&&top<size){
            return arr[top];
        }else{
            cout<<"Stack is empty\n";
            return -1;
        }

    }
    bool empty(){
        if(top<0){
            return 0;
        }else{
            return 1;
        }

    }
};
int main(){
    stackk s(5);
    s.push(12);
    s.push(22);
    s.push(32);
    s.push(42);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;

}
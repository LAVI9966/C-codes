#include<bits/stdc++.h>
using namespace std;
class qqueue{
    int *arr;
    int front;
    int n;
    int rear;
    public:
    qqueue(){
        n=100001;
        arr = new int[n];
        front=0;
        rear=0;
    }
    void push(int n){
        if(rear == n){
            cout<<"Queue is full\n";
        }else{
            arr[rear]=n;
            rear++;
        }
    }
    void pop(){
        if(front==rear){
            cout<<"Queue is empty\n";
        }else{
            arr[front]=-1;
            front++;

        }
    }
    void efront(){
        if(rear==front){
            cout<<"Empty"<<endl;
        }else{
            cout<<"Front  "<<arr[front]<<endl;
        }
    }
};
int main(){
    qqueue p;
    p.push(10);
    p.push(20);
    p.push(200);
    p.efront();
    p.pop();
    p.efront();
}
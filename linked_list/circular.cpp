#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insert(node* &tail,int ele,int data){
    //when list is empty
    if(tail==NULL){
        node* newnode = new node(data);
        tail=newnode;
        newnode->next=newnode;
    }else{
        node* cur=tail;
        while(cur->next!=NULL){
            cur=cur->next;
        }
        node* newnode= new node(data);
        newnode->next=cur->next;
        cur->next=newnode;
    }
}
void print(node* tail){
    node* tem = tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=tem);
}
int main(){
    node* tail=NULL;
    insert(tail,3,5);
    print(tail);
    insert(tail,5,10);
    print(tail);
    insert(tail,10,20);
    print(tail);
}

#include<bits/stdc++.h>
using namespace std;
//creation of node 
class node{
    public:
    int data;
    node* next;
    node(int data){
        this -> data = data; 
        this -> next = NULL;
    }
};
void insertathead(node* &head , int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}
void insertattail(node* &tail , int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp ;

}
void insertatpos(node* &head ,int p ,int d){
    node* node1 = new node(d);
    node* temp = head;
    int c = 1;
    while(p>c){
        temp = temp -> next; 
        c++;
    }
    node1 -> next = temp -> next;    
    temp -> next = node1;
}
void deleteanode(node* &head , int p){
    //for first node 
    if(p == 1){
        head = head -> next;
    }else{
        node* temp = head;
        int cnt = 1;
        node* pre = NULL;
        while(cnt < p){
            pre = temp;
            temp = temp -> next;
            cnt++;
        }
        //ye bhi chal ra he beta //temp ->next = temp -> next -> next; 
        pre -> next = temp -> next; 
    }
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
    node* node1 = NULL;
    node* head = node1;
    node* tail = node1;
    insertathead(head,10);
    insertathead(head,100);
    cout<<"Printing -->"<<endl;
    print(head);
    insertattail(tail,1000);
    insertattail(tail,100);
    insertattail(tail,100);
    cout<<"Printing -->"<<endl;
    print(head);
    insertatpos(head,3,500);
    cout<<"\nPrinting again ---->"<<endl;
    print(head);
    cout<<endl;
    deleteanode(head,2);
    cout<<"Printing -->"<<endl;
    print(head);

}
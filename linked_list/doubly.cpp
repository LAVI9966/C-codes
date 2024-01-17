// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node* pre;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->pre+NULL;
//     }
// };
// void print(node* head){
//     while(head!=NULL){
//         cout<<head->data<<" "<<endl;
//         head=head->next;
//     }
//     cout<<endl;
// }
// void insertathead(node* &head,int data){
//     node* temp = new node(data);
//     temp->next=head;
//     head->pre=temp;
//     head=temp;
// }
// void insertattail(node* &tail,int data){
//     node* temp = new node(data);
//     tail->next=temp;
//     temp->pre=tail;
//     tail=temp;
    
// }
// int main(){
//     node* node1 = new node(10);
//     node* head = node1;
//     node* tail = node1;
//     insertathead(head,20);
//     insertathead(head,30);
//     insertathead(head,40);
//     insertattail(tail,9);
//     insertattail(tail,8);
//     insertattail(tail,7);
//     print(head);

// }
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* pre;
    node(int d){
        data=d;
        next=NULL;
        pre=NULL;
    }
};
void insertattail(node* &tail,int data){
    node* temp = new node(data);
    node* htail=tail;
   // temp->next=NULL;
    temp->pre=htail;
    htail->next=temp;
    tail=temp;
}
void insertathead(node* &head,int data){
    node* temp = new node(data);
    node* hhead = head;
    temp->next=head;
    head->pre=temp;
    head=temp;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    node* ptr = new node(10);
    node* head=ptr;
    node* tail=ptr;
    print(head);
    insertattail(tail,20);
    print(head);
    insertathead(head,5);
    print(head);
    insertattail(tail,30);
    print(head);
    insertathead(head,1);
    print(head);
}
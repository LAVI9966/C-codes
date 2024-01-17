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
void print(node* head){
    cout<<"Printing---->\n";
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl; 
}
void createalink(node* &head){
    node* temp =head;
    cout<<"Enter no of elements\n";
    int n;
    cin>>n;
    int d;
    // cout<<"Enter data\n";
    // cin>>d;
    // temp->data=d;
    // cout<<"kk";
    while(n--){
        cout<<"Enter data\n";
        cin>>d;
        node* newnode = new node(d);
        temp->next = newnode;
        temp=newnode;
    }
    print(head);
}
void reverse(node* &head){
    cout<<"Reverse by iterative way\n";
    node* pre=NULL;
    node* cur=head;
    node* forwa=NULL;
    while(cur!=NULL){
        forwa=cur->next;
        cur->next=pre;
        pre=cur;
        cur=forwa;
    }
    head=pre;
    print(head);
    cout<<endl;
}
void reversebyrec(node* &head,node* cur,node* pre){
    //node* temp=head;
    //base casse
    if(cur==NULL){
        head=pre;
        return;
    }
    node* forwa = cur->next;
    reversebyrec(head,forwa,cur);
    cur->next=pre;
}
void allreverse(node* &head){
    node* temp=head;
    createalink(head);  
    reverse(head);
    node* pre=NULL;
    node* cur=head;
    reversebyrec(head,cur,pre);
    print(head);

}
int main(){
    node* head = new node(0);
    allreverse(head);
}
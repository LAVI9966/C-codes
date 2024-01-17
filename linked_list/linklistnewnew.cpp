#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertfirst(node* &head, int d){
    node* temp;
    temp = new node(d);
    temp->next=head;
    head=temp;
}
void insertatend(node* &head, int d){

    node* temp;
    temp = new node(d);

    node* ptr;
    ptr = head;

    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;

}
void insertatmid(node* &head, int d ,int po){
    node* ptr;
    ptr = head;
    
    node* temp;
    temp = new node(d);
    int count=1;

    while(count<po){    
    ptr=ptr->next;
    count++;
    }
    node* ptr2;
    ptr2=ptr->next;

    ptr->next=temp;
    temp->next=ptr2;

}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}
int main(){
    node *head;
    head = new node(10);

    //inser at first
    insertfirst(head,5);
    insertfirst(head,1);
    cout<<"----------------------------------"<<endl<<"Insert from first "<<endl;
    print(head);
    //insert at end
    insertatend(head,15);
    insertatend(head,20);
    cout<<"----------------------------------"<<endl<<"Insert from end "<<endl;
    print(head);
    //insertatmid;
    insertatmid(head,17,2);
    cout<<"----------------------------------"<<endl<<"Insert at the mid "<<endl;
    print(head);

    
}
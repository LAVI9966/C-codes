#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* pre;
    node(int da){
        data=da;
        next=NULL;
        pre=NULL;
    }
};
void print(node* head){
    int c=1;
    while(head!=NULL){
        cout<<"INSEX "<<c<<" "<<head->data<<endl;
        head=head->next;
        c++;
    }
}
int length(node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
void insertathead(node* &head,int d){
    node* temp;
    temp= new node(d);
    temp->next=head;
    head->pre=temp;
    head=temp;
}
void insertatend(node* &head, int da){
    node* temp;
    temp=new node(da);
    node* ptr = head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next = temp;
    temp->pre = ptr;


}
void insertatmid(node* &head,int da,int position){
    node* temp;
    temp=new node(da);
    
    node* ptr=head;
    int c = 1;
    while(c<position-1){
        ptr=ptr->next;
        c++;
    }
    temp->next=ptr->next;
    ptr->next=temp;
}
void deletanode(node* head, int po){
    node* ptr;
    ptr=head;
    int c=1;
    while(c<po){
        ptr=ptr->next;
        c++;
    }
    ptr->next=ptr->next->next;
    ptr->next->next->pre=ptr;
}
void search(node* &head,int key){
    node* ptr;
    ptr=head;
    int cnt=1;
    while(ptr->next!=NULL){
        if(ptr->data==key){
            cout<<"Key has been found at "<<cnt<<endl;
        }
        ptr=ptr->next;
        cnt++;
    }
}
int main(){
    node* list=new node(1);
    node* head;
    head = list;

    cout<<"Insertion at head -> "<<endl;
    insertathead(head,2);
    insertathead(head,4);
    insertathead(head,6);
    print(head);
    cout<<"Insertion at end -> "<<endl;
    insertatend(head,20);
    insertatend(head,22);
    print(head);
    cout<<"Insertion at mid ->"<<endl;
    insertatmid(head,8,5);
    print(head);
    cout<<"Delete->"<<endl;
    deletanode(head,4);
    deletanode(head,3);
    print(head);
    search(head,4);
}
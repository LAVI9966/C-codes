#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}
void insertatend(node* &head, int data){
    node* temp;
    temp = new node;
    temp->data=data;
    temp->next=NULL;

    node* ptr;
    ptr=head;

    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}
void merge(node* &head , node* &head2){
    node* ptr;
    ptr = head;

    node* ptr2;
    ptr2 = head2;

    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=ptr2;
}
int main(){
    node* head;
    head = new node;
    head->next=NULL;


    node* head2;
    head2 = new node;
    head2->next=NULL;

    int n;
    int m;
    cout<<"Enter no of elements is 1st list"<<endl;
    cin>>n;
    cout<<"Enter element of 1 list "<<endl;
    for(int i=1;i<=n;i++){
        int ele;
        cout<<"ENTER "<<i<<" element "<<endl;
        cin>>ele;
        insertatend(head,ele);
    }
    cout<<"______________________________________________"<<endl;
    cout<<"Enter no of elements is 2nd list"<<endl;
    cin>>m;
    cout<<"Enter element of 2 list "<<endl;
    for(int i=1;i<=m;i++){
        int ele;
        cout<<"ENTER "<<i<<" element "<<endl;
        cin>>ele;
        insertatend(head2,ele);
    }
    cout<<endl;
    cout<<"First list "<<endl;
    print(head);
    cout<<endl;
    cout<<"Second list "<<endl;
    print(head2);
    cout<<endl;
    cout<<"After merging "<<endl;
    merge(head,head2);
    print(head);

}
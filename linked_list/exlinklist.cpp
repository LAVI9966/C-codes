#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void print(node* head){
    if(head->next==NULL){
        cout<<head->data;
    }else{
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
    }
}
void insertatend(node* &head,int da){
    node* ptr;
    ptr=head;
    if(ptr->next==NULL){
        ptr->data=da;
    }else{
    node* temp;
    temp=new node;
    temp->data=da;
    temp->next=NULL;
    while (ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    }
}
// searching 
bool search(node* &head,int key){
    node* ptr;
    ptr=head;
        while(ptr->next!=NULL){
        if(ptr->data==key){
            return 1;
        }
        ptr=ptr->next;
        
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the no of element "<<endl;
    cin>>n;
    node* head;
    head= new node;
    head->next=NULL;
    for(int i=1;i<=n;i++){
        int e;
        cout<<"Enter element "<<i<<" :"<<endl;
        cin>>e;
        insertatend(head,e);
    }
    cout<<"your list is "<<endl;
    print(head);
    int key;
    cout<<"Enter key too find "<<endl;
    cin>>key;
    if(search(head,key)){
        cout<<"Key is present "<<endl;
    }else{
        cout<<"key is not present "<<endl;
    }
}
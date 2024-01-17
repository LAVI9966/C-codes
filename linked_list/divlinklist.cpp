#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
//inset at back
void insernewend(node* &head,int da){
    
	node *temp;
    // head ko dusre variable me rok kar rakha taki head kahi bhi gume nahi
    node *ptr=head;
	temp = new node;
	temp->data=da;
    temp->next=NULL;
	while(ptr->next!=NULL){
	 /* lavis apne pass 2 node hai suppose kar first data me 10 and link me 2 node ka address hai or 2 node ke data wale me 20 hai or link part me null hai
     sab suppose karna hai
     head (node 1) address is 23
     node->data =10
     node->link =25(node 2 address)
	  node 2 (adress is 25)
      node2 ->data = 20;
      node->link =NULL:

      so that 
      condition yah banegi ki
      node->next  null nahi hai tho enter karna
      karna loop me enter karna or

      node ke next part ko point karna
	}

	
	//cout<<head->data<<endl;*/
    ptr=ptr->next;
    }
    ptr->next=temp;

}
//for inserting at head
node* insertathead(node* &head,int d){
	node *temp;
	temp=new node;
	temp->data=d;
	temp->next=head;
	head=temp;
	return head;
	
}
void print(node* head){
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
}
int main(){
	node *head;
	head=new node;
	head->data=10;
	head->next=NULL;
	head=insertathead(head,20);
	head=insertathead(head,30);
    print(head);
    cout<<"at ending \n";
	insernewend(head,50);
	print(head);
	
}
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    public:
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtre(node* &temp){
    int data;
    cout<<"Enter the data ";
    cin>>data;
//node* temp;
    temp = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data for left->"<<data<<endl;
    temp->left=buildtre(temp->left);
    cout<<"Enter the data for right->\n"<<data<<endl;
    temp->right=buildtre(temp->right);
    return temp;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}
int main(){
    node* head=NULL;
    buildtre(head);
    cout<<"Inorder-->\n";
    inorder(head);
    cout<<"Preorder-->\n";
    preorder(head);
    cout<<"Postorder-\n";
    postorder(head);
}
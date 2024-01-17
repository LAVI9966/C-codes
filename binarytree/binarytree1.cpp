#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;  
      }
};
node* buildtree(node* root){
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for left "<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter data for right "<<data<<endl;
    root->right = buildtree(root->right);
    return root;

}
node* levelordertraversal(node* root)
{
    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }

    }
}

void inorder(node* root,int &count){
    if(root==NULL){
        count++;
        return ;
    }
    inorder(root->left,count);
    cout<<root->data<<"  ";
    inorder(root->right,count);
    //cout<<root->data<<" ";
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}

int main()
{
    int count=0;
    node* root;
    root = buildtree(root);
   // root = buildtree(root);
    cout<<endl<<endl<<"printing"<<endl;
    levelordertraversal(root);
    cout<<"\nINORDER TRAVERSAL "<<endl;
    inorder(root,count);
    cout<<"\nPREORDER TRAVERSAL "<<endl;
    preorder(root);
    cout<<"\nPOSTORDER TRAVERSAL "<<endl;
    postorder(root);
    cout<<endl<<endl<<"count is "<<count;
 
    return 0;
}
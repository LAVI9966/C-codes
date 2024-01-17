#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* inseer(Node* root,int data){
    if(root == NULL){
        root = new Node(data);
    }
    if(data < root -> data){
        root -> left = inseer (root -> left ,data);
    }
    if(data > root -> data){
        root -> right = inseer (root ->right ,data);
    }
    return root;
}
Node* minval(Node* root){
    Node* temp = root;
    while(temp ->left != NULL){
        temp = temp -> left;
    }
    return temp;
}
Node* deletnode(Node* root,int val){
    if(root == NULL){
        return root;
    }
    if(root -> data == val){
        //0child
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        //1child
        if(root -> left == NULL && root -> right != NULL){
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        if(root -> right == NULL && root -> left != NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        //2child
        if(root -> left != NULL && root -> right != NULL){
            int min = minval(root -> right) -> data;
            root -> data = min;
            root -> right = deletnode(root -> right , min);
            return root;
        }
    }else if(root -> data > val){
        root -> left = deletnode(root->left,val);
        return root;
    }else{
        root ->right = deletnode(root->right,val);
        return root;
    }
    return root;
}
void insertdata(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = inseer(root,data);
        cin>>data;
    }
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node* root =NULL;
    cout<<"Insert data in tree \n"<<endl;
    insertdata(root);
    cout<<"printing --> "<<endl;
    inorder(root);
    cout<<endl<<"Enter node to delete --> "<<endl;
    int val;
    cin>>val;
    root = deletnode(root,val);
    cout<<"printing --> "<<endl;
    inorder(root);
    
}

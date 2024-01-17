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
Node* creatbs(Node* root){
    cout<<"Enter data --> "<<endl;
    int data;
    cin>>data;
    root = new Node(data); 
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for left of "<<data<<endl;
    root->left = creatbs(root->left);
    cout<<"Enter data for right of "<<data<<endl;
    root->right = creatbs(root->right);
    return root;
}
void inorder(Node* root){
    if(root == NULL)
        return;

    inorder(root -> left);
    cout<<root->data<<" ";
    inorder(root ->right);
}

void postorder(Node* root){
    if(root == NULL)
        return;

    postorder(root -> left);
    postorder(root ->right);
    cout<<root->data<<" ";
}

void preorder(Node* root){
    if(root == NULL)
        return;
    
    cout<<root->data<<" ";
    preorder(root -> left);
    preorder(root ->right);
}
Node* levelordertraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //purana levelcomplete hogya 
            cout<<endl;
            //check if elements are present or not
            if(!q.empty()){
                q.push(NULL);
            }
        }else{       
            cout<<temp -> data<<" ";
            if(temp -> left != NULL){
                q.push(temp ->left);
            }

            if(temp -> right != NULL){
                q.push(temp->right);
            }
        }
    }
}
void buildfromlevelordertraversal(Node* &root){
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the data for left of "<<temp ->data <<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata != -1){
            temp -> left = new Node(leftdata);
            q.push(temp->left);
        }
        
        cout<<"Enter the data for right of "<<temp -> data <<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1){
            temp -> right = new Node(rightdata);
            q.push(temp -> right);
        }
    }
}
int main(){
    Node* root =NULL;
    buildfromlevelordertraversal(root);
    cout<<"Level order traversal --> "<<endl;
    levelordertraversal(root);
    cout<<endl<<"Inorder traversal --> "<<endl;
    inorder(root);
    cout<<endl<<"Preorder traversal --> "<<endl;
    preorder(root);
    cout<<endl<<"Postorder traversal --> "<<endl;
    postorder(root);
}

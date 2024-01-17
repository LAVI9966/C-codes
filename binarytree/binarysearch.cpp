//binary search tree perfect code
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* bst(node* root , int d){
    //base case 
    if(root == NULL ){
        root = new node(d);
        return root;
    }
    if(d < root -> data){
        //left me ja
        root -> left = bst(root -> left , d);
    }else{
        //right me ja
        root -> right = bst(root -> right , d);
    }
    return root;
}
void takeinput(node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = bst(root,data);
        cin>>data;
    }
}
void inorder(node* root){
    if(root ==  NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
    //cout<<root->data<<" ";
}
int min(node* root){
    node* temp;
    temp = root;
    while(temp -> left != NULL){
        temp = temp -> left; 
    }
    return temp -> data;
}
int max(node* root){
    node* temp;
    temp = root;
    while(temp -> right != NULL){
        temp = temp -> right; 
    }
    return temp -> data;
}
node* deletnode(node* root,int val){
    //base case
    if(root == NULL){
        return root;
    }
    //base casse
    if(root -> data == val){
        // 0 child
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        //1 child 
        //left
        if(root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        //right
        if(root->left ==NULL && root->right !=NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL){
            int minn = min( root -> right );
            root->data = minn;
            root->right = deletnode(root->right,minn);
            return root;
        }

    }else if(root -> data > val){
        root -> left = deletnode(root -> left , val);
        return root;
    }else{
        root -> right = deletnode(root -> right ,val);
        return root;
    }
    

}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    node* root = NULL;
    cout<<"Enter data for bst "<<endl;
    takeinput(root);  
    cout<<"Data is ->"<<endl;
    inorder(root);
    cout<<"\nMinimum is --> "<<min(root)<<endl;
    cout<<"\nMaximum is --> "<<max(root)<<endl;
    cout<<"\nPREORDEDR--> "<<endl;
    preorder(root);
    deletnode(root,45);
    cout<<"Data is ->"<<endl;
    inorder(root);
    deletnode(root,40);
    cout<<"Data is ->"<<endl;
    inorder(root);
    deletnode(root,50);
    cout<<"Data is ->"<<endl;
    inorder(root);
   
    return 0;
}
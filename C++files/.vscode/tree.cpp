#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* crateNode(int value){
    node* newNode = new node();
    newNode->data= value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

node* createTree(){
    int value;
    cout<<"Enter data(-1 for no node):";
    cin>>value;
    if(value == -1){
        return NULL;
    }
    node* newNode = createNode(value);

    cout<<"Enter left child of "<<value<<endl;
    newNode->left = createTree();

    cout<<"Enter right child of  "<<value<<endl;
    newNode->right = createTree();

    return newNode; 
}
void inorder(node* root){
    if(root ==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root== NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    cout<<"enter your binary tree dynamcally: "<<endl;
    node* root = createTree();
    cout<<endl<<"InOrder Traversal: ";
    inorder(root);

    cout<<endl<<"PreOrder Traversal: ";
    preorder(root);

    cout<<endl<<"PostOrder Traversal: ";
    postorder(root);

    cout<<endl;
    return 0;
}
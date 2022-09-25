#include<iostream>
using namespace std ;
 struct  node
 {
    int data;
    node * left ;
    node * right;
     node(int val){
        data = val;
        left = NULL;
        right = NULL;
     }
 };
  void preorder(struct node* root){
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    preorder(root->left);
    preorder(root-> right);
  }

void inorder(struct node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root-> data <<" ";
    inorder(root->right);
}

void postorder(struct node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";
}

int main(){
    struct node* root = new node(1);
    root-> left = new node(2);
    root-> right = new node(3);
//                  1
//                /   \
                 2     3


    root -> left -> left = new node(4);
    root -> left -> right = new node(5);

    root-> right -> left = new node(6);
    root-> right -> right = new node(7);

/*
                       1
                     /   \
                    2     3
                   / \    / \
                  4   5   6  7
*/
cout << "The preorder of the tree is ";
preorder(root);
cout << endl;
cout << "The inorder of the above tree is :";
inorder(root);
cout << endl;
cout << "The postorder of the above tree is :";
postorder(root);




    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
 int data;
 Node *left;
 Node *right;
 Node(int val){
     data=val;
     left=NULL;
     right=NULL;
 }
};
// struct Node{
//     int data;
//     struct Node *left;
//     struct Node *right;
//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
void preorder(Node *root){
    if(root==NULL) return;
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
}
void inorder(Node *root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    // preorder traversing:
    preorder(root);
    // postorder traversing:
    cout<<endl;
    postorder(root);
     // inorder traversing:
    cout<<endl;
    inorder(root);


    return 0;
}

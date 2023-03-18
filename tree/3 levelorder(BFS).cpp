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
// 
// ********level order traversing*********
void levelOrderTraversing(Node *root){
    queue<Node *> qt;
    qt.push(root);
    while(!qt.empty()){
        Node *temp=qt.front();
        qt.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            qt.push(temp->left);
        }
        if(temp->right!=NULL){
            qt.push(temp->right);
        }
    }
}
//*****************End********************
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
      
    root->right->right=new Node(7);

    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->left->left=new Node(6);
    // preorder traversing:
    // preorder(root);
    levelOrderTraversing(root);

    // postorder traversing:
    // cout<<endl;
    // postorder(root);
     // inorder traversing:
    // cout<<endl;
    // inorder(root);


    return 0;
}

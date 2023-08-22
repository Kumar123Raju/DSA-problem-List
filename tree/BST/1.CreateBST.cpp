#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
Node* insertIntoBST(Node* root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(root->data>data){
        root->left=insertIntoBST(root->left,data);
    }else{
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}
void insertvalue(Node* &root){
    int data;
    cin>>data;
     while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
     }

}
void levelorder(Node *root){
    queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
      
        for(int i=0;i <size; i++){
              Node *temp=q.front();
              q.pop();
              cout<<temp->data<<" ";
              if(temp->left!=NULL) q.push(temp->left);
              if(temp->right!=NULL) q.push(temp->right);
            
        }
        cout<<endl;
        
    }
}
int main(){
    Node *root=NULL;
    cout<<"Insert the data for node:"<<endl;
    insertvalue(root);
    levelorder(root);//beter hai ke iske jagah level order traversal use krlo
    return 0;


}

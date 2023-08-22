   int maxValue(TreeNode *root){
        TreeNode *temp=root;
        if(temp==NULL) return -1;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        return temp->val;

    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key){
            if(root->left==NULL && root->right==NULL){
                return NULL;
            }else if(root->left==NULL && root->right!=NULL){
                TreeNode *child=root->right;
                return child;
            }else if(root->left!=NULL && root->right==NULL){
                TreeNode *child=root->left;
                return child;
            }else{
                int inorderpre=maxValue(root->left);
                root->val=inorderpre;
                root->left=deleteNode(root->left,inorderpre);
                return root;
            }


        }else if(root->val<key){
            root->right=deleteNode(root->right,key);
        }else if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        return root;
        
    }

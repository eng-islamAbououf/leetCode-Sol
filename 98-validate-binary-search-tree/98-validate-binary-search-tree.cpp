/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool validate(TreeNode* root, TreeNode* LeftParent=NULL,TreeNode* RightParent=NULL)
    {
        if(root==NULL)return true; // if we reach leaf without error then true
        
        if(LeftParent==NULL && RightParent==NULL) 
        {
            return validate(root->left,LeftParent,root) && 
                        validate(root->right,root,RightParent);
        }
    
        else if(LeftParent==NULL)
        {
            if(root->val>=RightParent->val) return false;
            
        }
        else if(RightParent==NULL)
        {
            if(root->val<=LeftParent->val) return false;
        }
        
        else if(root->val>=RightParent->val || root->val<=LeftParent->val ) return false;
        return validate(root->left,LeftParent,root) && validate(root->right,root,RightParent);
    }
    bool isValidBST(TreeNode* root) {
        return validate(root) ;
    }
};
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
    void visit(TreeNode* root ,vector<vector<int>>& vc , int level){
        if(root == nullptr)
            return ; 
        if(vc.size()==level)
            vc.push_back(vector<int>()) ;
        
        vc[level].push_back(root->val) ;
        visit(root->left , vc , level+1) ;
        visit(root->right , vc , level+1) ;

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vc ;
        visit(root,vc,0);
        return vc ;
    }
};
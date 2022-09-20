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
    void store(TreeNode* root , vector<int> &vc){
        if(root){
            store(root->left , vc) ;
            vc.push_back(root->val) ;
            store(root->right , vc) ;
        }
    }
public:

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vc ;
        store(root , vc) ;
        return vc ;
    }
};
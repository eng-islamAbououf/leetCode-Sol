/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void visit(Node *root, vector<int>& vc) {
        if(root!= nullptr){
            vc.push_back(root->val) ;
            for (int i = 0; i < root->children.size(); ++i) {
                visit(root->children[i],vc);
            }
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> vc ;
        visit(root , vc) ;
        return vc ;
    }

    
};
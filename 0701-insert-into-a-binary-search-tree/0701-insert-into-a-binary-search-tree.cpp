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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == nullptr) {
            return new TreeNode(val);
        }
        TreeNode *p,*q;
        TreeNode* t = new TreeNode(val);
        t->val=val;
        t->left=nullptr;
        t->right=nullptr;
        p=root;
        while (p && p->val!=val){
            q=p;
            if (val<p->val){
                p=p->left;
            }
            else{
                p=p->right;
            }
        }

        if (q->val>val){
            q->left=t;
        }
        else{
            q->right=t;
        }
        return root;
    }
};
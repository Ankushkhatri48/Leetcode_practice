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
    int ab(TreeNode* root){
        if(root == NULL) return 0;
        int a = ab(root->left);
        if(a== -1) return -1;
        int b = ab(root->right);
        if(b == -1) return -1;
        if(abs(a-b)>1) return -1;
        return 1+max(a,b);
    }
    bool isBalanced(TreeNode* root) {
        return (ab(root) != -1);
    }
};
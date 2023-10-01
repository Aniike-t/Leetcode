/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
        if(!root) return 0;
        int Left = maxDepth(root->left);
        int Right = maxDepth(root->right);
        return fmax(Left,Right)+1;
}
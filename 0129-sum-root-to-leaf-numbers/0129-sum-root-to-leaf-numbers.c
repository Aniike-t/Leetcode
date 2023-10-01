/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumNumbers(struct TreeNode* root){
    return sum(root, 0);
}
int sum(struct TreeNode* n, int s){
    if(n==NULL)return 0;
    if(n->left==NULL && n->right==NULL)return s*10 + n->val;
    return sum(n->left,s*10+n->val) + sum(n->right,s*10+n->val);
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool check(struct TreeNode* p1,struct TreeNode* p2){
        if(p1==NULL && p2==NULL)
                return true;
        if(p1==NULL || p2==NULL)
                return false;
        if(p1->val != p2->val)
                return false;
        else return check(p1->left,p2->right) && check(p1->right,p2->left);
}
bool isSymmetric(struct TreeNode* root){
        if(root==NULL)
                return true;
        else return check(root->left,root->right);
}
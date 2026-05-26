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
int hight(TreeNode* root){
    if(root==NULL) return 0;
    int lh=hight(root->left);
    if(lh==-1) return -1;
    int rh=hight(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return 1+max(lh,rh);
}
    bool isBalanced(TreeNode* root) {
       if(root==NULL) return true;
       
      
       return hight(root)!=-1; 
    }
};

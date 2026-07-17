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
int getheight(TreeNode*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftans=getheight(root->left);
    int rightans=getheight(root->right);
    int maxheight=max(leftans,rightans);
    int totalheight=maxheight+1;
    return totalheight;
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        int lh=getheight(root->left);
        int rh=getheight(root->right);
        int absdiff=abs(lh-rh);
        bool status=(absdiff<=1);
        
        int leftans=isBalanced(root->left);
        int rightans=isBalanced(root->right);

        if(status && leftans && rightans)
        {
            return true;
        }
        else
        {
            return false;
        }
       


    }
};
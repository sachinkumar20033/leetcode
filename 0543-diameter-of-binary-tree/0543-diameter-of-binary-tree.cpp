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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int opt1=diameterOfBinaryTree(root->left);
        int opt2=diameterOfBinaryTree(root->right);
        int opt3=getheight(root->left)+getheight(root->right);
        int maxdiamter=max(opt1,max(opt2,opt3));
        return maxdiamter;
    }
};
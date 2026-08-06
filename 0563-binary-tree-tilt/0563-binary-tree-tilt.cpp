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
int solve(TreeNode*root,int &currSum)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=solve(root->left,currSum);
    int right=solve(root->right,currSum);
    currSum+=abs(left-right);

    return left+right+root->val;
}
    int findTilt(TreeNode* root) {
        int currSum=0;
        if(root==NULL)
        {
            return 0;
        }
        solve(root,currSum);
        return currSum;
    }
};
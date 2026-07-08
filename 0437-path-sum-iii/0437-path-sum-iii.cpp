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
int solve(TreeNode*root,long long targetSum,long long sum)
{
    if(root==NULL)
    {
        return 0;
    }
    sum=sum+root->val;
    int ans=0;
    if(sum==targetSum)
    {
        ans++;
    }

    ans += solve(root->left,targetSum,sum);
    ans += solve(root->right,targetSum,sum);
    return ans;
}
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
        {
            return 0;
        }
        int ans=solve(root,targetSum,0);

        ans +=pathSum(root->left,targetSum);
        ans +=pathSum(root->right,targetSum);
        return ans;

    }
};
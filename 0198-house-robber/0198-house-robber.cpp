class Solution {
public:
int solve(vector<int>&nums,int index)
{
    int n=nums.size();
    if(index>=n)
    {
        return 0;
    }
    int include=nums[index]+solve(nums,index+2);
    int exclude=0+solve(nums,index+1);
    int finalans=max(include,exclude);
    return finalans;
}
int solveMemo(vector<int>&nums,int index,vector<int>&dp)
{
    int n=nums.size();
    if(index>=n)
    {
        return 0;
    }
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    int include=nums[index]+solveMemo(nums,index+2,dp);
    int exclude=0+solveMemo(nums,index+1,dp);
    dp[index]=max(include,exclude);
    return dp[index];
}
    int rob(vector<int>& nums) {
        // return solve(nums,0);
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int index=0;
        return solveMemo(nums,index,dp);
    }
};
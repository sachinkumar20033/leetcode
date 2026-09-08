class Solution {
public:
int solveByRecursion(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return solveByRecursion(n-1)+solveByRecursion(n-2);
}

int solveByMemorization(int n,vector<int>&dp)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=solveByMemorization(n-1,dp)+solveByMemorization(n-2,dp);
    return dp[n];
}
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return solveByMemorization(n,dp);
    }
};
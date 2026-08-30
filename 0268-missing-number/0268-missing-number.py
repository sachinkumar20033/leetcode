class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)

        total_sum=n*(n+1)//2

        arr_sum=0

        for i in range(n):
            arr_sum=arr_sum+nums[i]

        
        return total_sum-arr_sum
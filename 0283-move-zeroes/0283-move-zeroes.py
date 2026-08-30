class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        left=0

        for i in range(n):
            if(nums[i]!=0):
                temp=nums[left]
                nums[left]=nums[i]
                nums[i]=temp

                left=left+1

        return nums
        
class Solution {
public:
int firstoccur(vector<int>&nums,int target)
{
    int n=nums.size();
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            end=mid-1;
        }
        else if(nums[mid]<target)
        {
            start=mid+1;
        }
        else if(nums[mid]>target)
        {
            end=mid-1;
        }
    }
    return ans;
}
int lastoccur(vector<int>& nums, int target)
{
    int n=nums.size();
    int start=0;
    int end=n-1;
    int last=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            last=mid;
            start=mid+1;
        }
        else if(nums[mid]<target)
        {
            start=mid+1;
        }
        else if(nums[mid]>target)
        {
            end=mid-1;
        }
    }
    return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstoccur(nums,target);
        int last=lastoccur(nums,target);

        return {first,last};
    }
};
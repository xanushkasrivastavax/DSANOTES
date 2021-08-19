class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n=nums.size();
        int l=0;
        int r=n-1;
        vector<int> result;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[l]+nums[r]==target)
            {
                result.push_back(l+1);
                result.push_back(r+1);
                return result;
            }
            else if(nums[l]+nums[r]>target)
            {
                r--;
            }
            else{
                l++;
            }
        }
        return {};
    }
};

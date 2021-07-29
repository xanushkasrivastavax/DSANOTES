class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
          map<int,int>mp;
        mp[0]++;
        int cumm_sum = 0;
        int count  = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            cumm_sum = cumm_sum+nums[i];
            count = count+mp[cumm_sum-k];
            mp[cumm_sum]++;
            
        }
        return count;
    }
};

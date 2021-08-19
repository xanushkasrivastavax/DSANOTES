class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> result;
     	unordered_map<int, int> hash;

    
        for(int i=0;i<n;i++)
        {
            int newfind=target-nums[i];
            if(hash.find(newfind)!=hash.end())
            {
                result.push_back(hash[newfind]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]]=i;
        }
        return result;
    }
};

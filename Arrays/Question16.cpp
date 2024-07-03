class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                return {i,j};
            }
        }
        return {};
    }
};

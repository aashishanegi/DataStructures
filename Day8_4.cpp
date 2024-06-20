class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        map <int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        int repeat=-1;
        for(auto it: mpp)
        {
            if (it.second>1)
            {
                repeat=it.first;
                break;
            }
        }
        return repeat;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        map <int,int> mpp;
        for(auto x:nums)
        {
            mpp[x]++;
        }
        for (auto z:mpp)
        {
            if(z.second==1)
            return z.first;
        }
        return 0;
    }
};

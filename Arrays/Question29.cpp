class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n=nums.size();
       int x= (int)n/3+1; 
        vector <int> ans;
       map <int, int> mpp;
       for (int i=0;i<n;i++)
       {
            mpp[nums[i]]++;
        }
        for (auto it : mpp)
       {
            if (it.second >=x)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
        
    }
};

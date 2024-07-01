class Solution {
public:
    void solve (int idx, vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &ls, int n)
    {
        if(idx==n)
        {
            return;
        }
        if(target==0)
        {
            ans.push_back(ls);
            return;
        }
       if(candidates[idx]<=target)
       {
        ls.push_back(candidates[idx]);
        solve(idx,candidates,target-candidates[idx],ans,ls,n);
        ls.pop_back();
       }
        solve(idx+1,candidates,target,ans,ls,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ls;
        int n=candidates.size();
        solve(0,candidates,target,ans,ls,n);
        return ans;      
    }
};

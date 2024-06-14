class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr_count=0;
        int count =0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
            count++;
            curr_count=max(curr_count,count);
             }           
            else
            {                
                count=0;
            }
        } 
        return curr_count;
    }       
};

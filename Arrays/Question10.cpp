class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for(int i=0;i<=n;i++)
        {
           sum+=i;
        }
        for(int i=0;i<n;i++)
        {
            sum=sum-arr[i];
        }
        return sum;
    }
};

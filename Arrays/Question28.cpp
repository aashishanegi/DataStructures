class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> pascals(numRows);
        for(int i=0;i<numRows;i++)
        {
            pascals[i].resize(i+1);
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                {
                    pascals[i][j]=1;
                }
                else
                {
                    pascals[i][j]=pascals[i-1][j]+pascals[i-1][j-1];
                }
            }
        }
        return pascals;
        
    }
};

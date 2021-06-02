#define ll long long
class Solution {
    ll n,m;
    ll dp[101][101];
public:
    ll uniquePathsWithObstacles(vector<vector<int>>& mat) {
        n = mat.size();
        m = mat[0].size();
        memset(dp, 0, sizeof(dp));
        if(!mat[n-1][m-1])
        dp[n-1][m-1] = 1;
        else dp[n-1][m-1] = 0;
        
        for(int i = n - 1; i >= 0; i--)
        {
            for(int j = m-1; j >= 0; j--)
            {
                if(mat[i][j] != 1)
                dp[i][j] += (dp[i + 1][j] + dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
};
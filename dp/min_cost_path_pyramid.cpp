int minimumTotal(vector<vector<int>>& triangle) {
    int n = triangle.size();
    int dp[n][n];
    for(int col=0;col<n;++col)
        dp[n-1][col] = triangle[n-1][col];
    
    for(int row=n-2;row>=0;row--){
        for(int col=0;col<=row;++col){
            dp[row][col] = triangle[row][col] + min(dp[row+1][col],dp[row+1][col+1]);
        }
    }
    return dp[0][0];
}

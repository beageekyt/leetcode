class Solution {//using recursion 
public:
    int countpath(int m,int n,int i,int j)
    {
        if(i==m-1&&j==n-1) return 1;
        if(i>m-1||j>n-1)return 0;
        else
            return countpath(m,n,i+1,j)+countpath(m,n,i,j+1);
    }
    int uniquePaths(int m, int n) {
        return countpath(m,n,0,0);
    }
};
class Solution {//using Dynamic programming 
public:
    int countpath(int m,int n,int i,int j,vector<vector<int>> &dp)
    {
        if(i==m-1&&j==n-1) return 1;
        if(i>m-1||j>n-1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        else
            return dp[i][j]=countpath(m,n,i+1,j,dp)+countpath(m,n,i,j+1,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
         int num=countpath(m,n,0,0,dp);
        if(m==1&&n==1)
            return num;
        return dp[0][0];
        
    }
};
class Solution { //using mathamatical combinations
public:
    int uniquePaths(int m, int n) {
         unsigned long int num =m+n-2,ans=1;
        int j=min(m-1,n-1);
        for(int i=0,k=1;i<j;i++,k++)
            ans=ans*(num-i)/k;
        return ans;
        
    }
};

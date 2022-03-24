class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int f=0,i;
        for(i=1;i<matrix.size();i++)
        {
            if(matrix[i][0]>target&&matrix[i-1][0]<=target)
                break;
        }
        for(int j=0;j<matrix[i-1].size();j++)
        {
            if(target==matrix[i-1][j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
            return false;
        else
            return true;
    }
};
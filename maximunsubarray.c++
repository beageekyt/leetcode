class Solution {
public:
    int maxSubArray(vector<int>& nums) {//here we are going to use kadane's algorithm 
        //https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
        int max_so_far=INT_MIN;
        int max_ending_here=0;
        for(int i=0;i<nums.size();i++)
        {
            max_ending_here+=nums[i];
            if(max_so_far<max_ending_here)
            max_so_far=max_ending_here;
            if(max_ending_here<0)
            max_ending_here=0;
        }
        return max_so_far;
    }
};
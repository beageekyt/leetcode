class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];//int his problem we used floyd torties method
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
            
        }while(fast!=slow);
        fast=nums[0];
        while(fast!=slow)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;
    }
};
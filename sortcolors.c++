class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a[3]={0},k;
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]]++;
        }
        for(int i=0,k=0;i<nums.size();i++)
        {
            nums[i]=a[k];
            a[k]--;
            if(a[k]==0)
            k++;
        }
        return nums;
    }
};
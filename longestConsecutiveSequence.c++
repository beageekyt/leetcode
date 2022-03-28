class Solution {// brute force
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,count=1;
        int first=nums[0];
        for(i=1;i<nums.size();i++)
        {
            if(first+1==nums[i])
            {
                count++;
            }
            else if(first!=nums[i])
            {
                if(count>ans)
                ans=count;
                count=1;
                first=nums[i];
            }
        }
        return ans;
    }
};
//batter approch
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int > hashset;
        for(auto num:nums)
            hashset.insert(num);
        int answer=0;
        for(int num:nums)
        {
            if(!hashset.count(num-1))
            {
                int currentnum=num;
                int currentstreak=1;
                while(hashset.count(currentnum+1))
                {
                    currentnum+=1;
                    currentstreak+=1;
                }
                answer=max(answer,currentstreak);
            }
        }
        return answer;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int ,int>> v;
        int n=nums.size(),i;
        
        for(i=0;i<n;i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int s=0,e=v.size()-1;
        while(s<e)
        {
            if(v[s].first+v[e].first==target)
                return {v[s].second,v[e].second};
            else if(v[s].first+v[e].first<target)
                s++;
            else
                e--;
        }
        return{-1,-1};
    }
};
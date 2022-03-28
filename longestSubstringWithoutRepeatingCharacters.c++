class Solution {//time O(2n) space o(2)
public:
    int lengthOfLongestSubstring(string s) {
        if(s[0]==NULL)
            return 0;
        int ans=INT_MIN;
        unordered_set< int > set;
        int l=0,r=0;
        for(r=0;r<s.length();r++)
        {
            if(set.find(s[r])!=set.end())
            {
                while(l<r&&set.find(s[r])!=set.end())
                {
                    set.erase(s[l]);
                    l++;
                }
            }
            set.insert(s[r]);
            ans=max(ans,r-l+1);
        }
         return ans;
    }
   
};

class Solution {//time - O(n) space O(N) size of hash map
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256,-1);
        int left=0,right=0;
        int n=s.size();
        int len=0;
        while(right!=n)
        {
            if(map[s[right]]!=-1)
                left=max(map[s[right]]+1,left);
            map[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
        
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        int i,n=0,a=1,y,z;
        while(x/a>=10)
        {
            a=a*10;
        }
        while(x!=0)
        {
            int l=x/a;
            int t=x%10;
            if(l!=t)
            return false;
            x=x%a;
            x=x/10;
            a=a/100;
        }     
        return true;

    }
};
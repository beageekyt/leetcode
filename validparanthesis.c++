class Solution {
public:
    bool isValid( string s) {
        stack<char> stack;
        int len=s.size();
        if(len%2) return false;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            stack.push(s[i]);
            else
            {
                if(stack.empty())return false;
                char c=stack.top();
                if((c=='(' && s[i]==')') || (c=='[' && s[i]==']') || (c=='{' && s[i]=='}')) stack.pop();
                else return false;
            }

        }
        if (stack.empty())return true;
        else return false;

    }
};
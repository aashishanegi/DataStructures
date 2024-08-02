class Solution {
public:
    string greatestLetter(string s) {
        unordered_set <char> p;
        string ans = "";
        char temp = ' ';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                p.insert(s[i]);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                if(p.find(s[i]+32)!=p.end())
                {
                    temp=max(temp,s[i]);
                }
            }
        }
        if(temp!=' ')
            ans+=temp;
        
        return ans;
    }
};

class Solution {
public:
    string reverseWords(string s) {
    stack<string> st;
    int i=0;
    string str="";
    while(i<s.length())
    {
        while(i<s.length() && s[i]==' ') i++;
        while(i<s.length() && s[i]!=' ')
        {
            str+=s[i];
            i++;
        }
        if(!str.empty())
        {
            st.push(str);
            str="";
        }
    }
    string ans="";
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
        if(!st.empty())
        {
            ans+=" ";
        }
    }
    return ans;
    }
};

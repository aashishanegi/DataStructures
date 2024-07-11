class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,char> m;
        for(auto x:s)
        {
            m[x]++;
        }
        for(auto y : t)
        {
            m[y]--;
        }
        for(auto a : m)
        {
            if(a.second !=0) return false;
        }
        return true;
    }
};

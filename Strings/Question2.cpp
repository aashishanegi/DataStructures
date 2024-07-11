class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector <int> check (26,0);
        for(char x:s)
        {
            check[x-'a']++;
        }
        for(char y : t)
        {
            check[y-'a']--;
            if (check[y - 'a'] < 0) return false;
        }
        return true;
    }
};

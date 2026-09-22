class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        int fr[26]={0};
        for(auto c:s)
        {
            fr[c-'a']++;
        }
        for(char c:t)
        {
            fr[c-'a']--;
            if(fr[c-'a']<0)return false;
        }
        return true;
        
    }
};

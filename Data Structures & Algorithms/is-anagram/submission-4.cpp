class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int>x;
        for(auto c:s)
        {
            x[c]++;
        }
        for(int i=0;i<t.length();i++)
        {
            if(x.find(t[i])==x.end() || x[t[i]]==0)return false;
            else x[t[i]]--;
        }
        return true;
        
    }
};

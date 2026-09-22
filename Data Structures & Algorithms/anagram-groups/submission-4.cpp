class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>>mp;

        for(auto word:strs)
        {
            vector<int>freq(26,0);
            for(auto i:word)
            {
                freq[i-'a']++;
            }
            string key="";
            for(auto i:freq)
            {
                key+="#"+to_string(i);
            }
            mp[key].push_back(word);
        }

        vector<vector<string>>v;
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        return v;
        
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>>mp;

        for(auto word:strs)
        {
            string sword=word;

            sort(sword.begin(),sword.end());

            mp[sword].push_back(word);
        }

        vector<vector<string>>v;
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        return v;
        
    }
};

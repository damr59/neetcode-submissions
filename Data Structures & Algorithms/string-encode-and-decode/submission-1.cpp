class Solution {
public:

    string encode(vector<string>& strs) {
        string es;

        for(auto y:strs)
        {
            es+=to_string(y.size())+'#'+y;
        }
        return es;
    }

    vector<string> decode(string s) {
        vector<string>ds;
        int i=0;
        while(i<s.length())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int l=stoi(s.substr(i,j-i));
            
            ds.push_back(s.substr(j+1,l));

            i=j+1+l;
        }
    return ds;
    }
};

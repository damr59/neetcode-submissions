class Solution {
public:
    bool isPalindrome(string s) {
        
        int f=0,l=s.length()-1;
        while(f<l)
        {
            while(f<l && !isalnum(s[f]))f++;
            while(f<l && !isalnum(s[l]))l--;
            if(tolower(s[f])!=tolower(s[l]))
            {
                return false;
            }
            f++;l--;
        }
        return true;
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,h=s.length()-1;
        while(l<h)
        {
            if(isalnum(s[l]) && isalnum(s[h]))
            {
                if(tolower(s[l])!=tolower(s[h]))return false;
                else{
                    l++;
                    h--;
                }
            }
            else{
                if(!isalnum(s[l]))l++;
                if(!isalnum(s[h]))h--;
            }
        }
        return true;
    }
};

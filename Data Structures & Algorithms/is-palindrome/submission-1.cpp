class Solution {
public:
    bool isPalindrome(string s) {
        int f=0,l=s.length()-1;
        while(f<l)
        {
            if(isalnum(s[f]) && isalnum(s[l])){
            char first=(char)tolower(s[f]);
            char last=(char)tolower(s[l]);
            if(first==last){f++;l--;}
            else{return false;}}
            else{
                if(!isalnum(s[f]))f++;
                if(!isalnum(s[l]))l--;
            }
        }
        return true;
    }
};

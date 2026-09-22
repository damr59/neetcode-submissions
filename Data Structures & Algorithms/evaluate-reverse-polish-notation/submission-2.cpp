class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int res=0;
        for(int i=0;i<tokens.size();i++)
        {
            char c=tokens[i][0];
            if(isdigit(c) || tokens[i].length()>1 && tokens[i][0]=='-')
            {
                int x=stoi(tokens[i]);
                st.push(x);
                res=x;
            }
            else{
                if(st.empty())return res;
                int a=st.top();
                st.pop();
                if(st.empty()){
                    return a;
                }
                else{
                int b=st.top();
                st.pop();
                switch(c)
                {
                    case '+':
                    res=b+a;break;
                    case '-':
                    res=b-a;break;
                    case '*':
                    res=b*a;break;
                    case '/':
                    res=b/a;break;
                }
                st.push(res);
                }
            }
        }
        return res;
    }
};

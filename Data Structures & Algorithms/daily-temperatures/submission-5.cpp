class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>st;
       vector<int>res(t.size());
       for(int i=t.size()-1;i>=0;i--)
       {
        
        while(!st.empty()&&t[st.top()]<=t[i])
        {
            st.pop();
        }
        if(!st.empty())
        {
            res[i]=st.top()-i;
        }
        st.push(i);
       } 
       return res;
    }
};

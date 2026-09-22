class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>v;
        int max=0;
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1){
            v.push_back(-1);
            }
            else{
                v.push_back(max);
            }
            if(arr[i]>max)
            {
                max=arr[i];
            }
            
        }
       reverse(v.begin(),v.end());
        return v;
    }
};
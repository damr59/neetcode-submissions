class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            int p=1;
            for(int j=0;j<n;j++)
            {
                if(j!=i)
                {
                    p=p*nums[j];
                }
            }
            v.push_back(p);
        }
        return v;

    }
};

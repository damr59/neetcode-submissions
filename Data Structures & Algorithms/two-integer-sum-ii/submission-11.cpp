class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int sum=nums[l]+nums[r];
            if(sum==target)
            {
                v.push_back(l+1);
                v.push_back(r+1);
                break;
            }
            else if(sum>target)
            {
                r--;
            }
            else{
                l++;
            }
        }
        return v;
        
    }
};

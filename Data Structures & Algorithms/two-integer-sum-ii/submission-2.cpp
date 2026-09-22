class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int n=nums.size();
        int x=0,y=n-1;
        while(x<y){
            if(nums[x]+nums[y]==target){
                v.push_back(x+1);
                v.push_back(y+1);
                break;
            }
            else if(nums[x]+nums[y]>target)
            {
                y--;
            }
            else{
                x++;
            }
             
        }
        return v;
    }
};

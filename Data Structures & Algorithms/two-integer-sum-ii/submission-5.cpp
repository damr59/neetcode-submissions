class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        int x=0,y=n-1;
        while(x<y){
            if(nums[x]+nums[y]==target){
                return  {x+1,y+1};
            }
            else if(nums[x]+nums[y]>target)
            {
                y--;
            }
            else{
                x++;
            }
             
        }
        return {};
    }
};

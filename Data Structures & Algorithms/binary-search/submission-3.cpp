class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int l=nums[0],h=nums[nums.size()-1];
        // while(l<=h)
        // {
        //     int mid=(l+h)/2;
        //     if(nums[mid]==target)
        //     {
        //         return mid;
        //     }
        //     else if(nums[mid]>target)
        //     {
        //         h--;
        //     }
        //     else{l++;}
        // }
        // return -1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)return i;
        }
        return -1;
    }
};

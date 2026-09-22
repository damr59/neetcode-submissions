class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int leftmax=0;
        int rightmax=0;
        int water=0;
        while(l<r)
        {
            if(height[l]>=height[r])
            {
                if(height[r]<rightmax)
                {
                    water+=rightmax-height[r];
                }
                else{
                    rightmax=height[r];
                }
                r--;
            }
            else{
                if(height[l]>leftmax)
                {
                    leftmax=height[l];
                }
                else{
                    water+=leftmax-height[l];
                }
                l++;
            }
        }
        return water;
    }
};

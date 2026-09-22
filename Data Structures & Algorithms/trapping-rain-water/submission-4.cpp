class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int leftmax=0,rightmax=0,w=0;
        while(l<=r)
        {
            if(height[l]<height[r])
            {
                if(height[l]>=leftmax)
                {
                    leftmax=height[l];
                }
                else{
                    w+=leftmax-height[l];
                }
                l++;
            }
            else{
                if(height[r]<rightmax)
                {
                    w+=rightmax-height[r];
                }
                else{
                    rightmax=height[r];
                }
                r--;
            }
        }
        return w;
    }
};

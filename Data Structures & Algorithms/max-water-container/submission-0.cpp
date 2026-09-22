class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        int l=0,r=height.size()-1;
        while(l<r)
        {
            int width=r-l;
            int h=min(height[l],height[r]);
            int water=width*h;
            maxi=max(maxi,water);
            if(height[l]<height[r])
            {
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
    }
};
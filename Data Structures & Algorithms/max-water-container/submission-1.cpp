class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int maxi=0;
        while(l<r)
        {
            int d=r-l;
            int minw=min(heights[l],heights[r]);
            int w=minw*d;
            maxi=max(maxi,w);
            if(heights[l]<heights[r])
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

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;int r=heights.size()-1;
        int maxi=0;
        while(l<r){
            int width=r-l;
            int h=min(heights[l],heights[r]);
            int area=width*h;
            maxi=max(maxi,area);
            if(heights[l]<heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxi;
    }
};

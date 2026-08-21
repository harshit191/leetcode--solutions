class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int maxwater=0;
        while(lp<rp){
            int width=rp-lp;
             int hieght=min(height[lp],height[rp]);
             int area=hieght*width;
            maxwater=max(maxwater,area);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }
        return maxwater;

    }
};
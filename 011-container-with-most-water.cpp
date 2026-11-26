class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;int r=height.size()-1;
        int sum;
        int max=0;
        while(i<r){
            if(height[i]<height[r]){
                sum=(height[i]*(r-i));
                i++;
            }else{
                sum=(height[r]*(r-i));
                r--;
            }if(max<sum)max=sum;
        }
        return max;
    }
};

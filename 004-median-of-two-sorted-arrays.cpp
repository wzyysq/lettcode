class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        if (n > m) return findMedianSortedArrays(nums2, nums1);
        int i,j;
        int lo=0,hi=n;
        while(lo<=hi){
              i=(lo+hi)/2;
            j=(n+m+1)/2-i;
            int aleft=(i==0?INT_MIN:nums1[i-1]);
            int aright=(i==n?INT_MAX:nums1[i]);
            int bleft=(j==0?INT_MIN:nums2[j-1]);
            int bright=(j==m?INT_MAX:nums2[j]);
            if(aleft<=bright&&bleft<=aright){
                if((n+m)%2==0){
                    return (max(aleft, bleft) + min(aright, bright)) / 2.0;
                }
            else{
                    return max(aleft,bleft);}}
                else if(aleft>bright){
                    hi=i-1;
                }else{lo=i+1;}
            }

  return 0.0;
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;  
        int i,j;
        int cnt;
        for(int s=0;s<nums.size();s++){
            if (s > 0 && nums[s] == nums[s - 1]) continue;
            i=s+1;
            j=nums.size()-1;
            cnt=0-nums[s];
            while(i<j){
                if(nums[i]+nums[j]==cnt){
                    ans.push_back({nums[s],nums[i],nums[j]});
                        while (i < j && nums[i] == nums[i + 1]) i++;
    while (i < j && nums[j] == nums[j - 1]) j--;
    i++; j--;}
            else{
                if(nums[i]+nums[j]<cnt){
                    i++;
                }else{j--;}
            }
                
            }
        }
    return ans;}
};

// 1. 两数之和 Two Sum
// 思路：暴力双循环，枚举所有下标对 (i, j)，找到 nums[i] + nums[j] == target 即返回。
// 时间复杂度 O(n^2)，空间复杂度 O(1)
// 复盘（2026-11-12）：本地实测三组样例全过；优化方向：哈希表一次遍历 O(n)，下次再写。
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<(int)nums.size();i++){
            for(int j=i+1;j<(int)nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return{i,j};
                }
        }
    }
return {};}
};

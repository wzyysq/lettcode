// 1. 两数之和 Two Sum（哈希版）
// 思路：一次遍历，边走边登记；对每个数先查搭档 need = target - nums[i] 在不在表里，在就返回两个下标，不在就把自己登记进表。
// 时间复杂度 O(n)，空间复杂度 O(n)
// 复盘（2026-11-13）：凭记忆默写完成，VS Code 与本地 g++ 实测三组样例全过。暴力版见 001-two-sum.cpp。
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;          // 值 -> 下标
        for (int i = 0; i < (int)nums.size(); i++) {
            int need = target - nums[i];     // 我缺几
            if (mp.count(need)) {            // 查的是 need，不是 nums[i]
                return {mp[need], i};
            }
            mp[nums[i]] = i;                 // 没见过，登记自己
        }
        return {};
    }
};

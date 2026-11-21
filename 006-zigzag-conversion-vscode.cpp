// LeetCode 第 6 题：Z 字形变换
// 题目链接：https://leetcode.cn/problems/zigzag-conversion/
// 思路（下标规律法，本人推导）：周期 cycle = 2*numRows - 2；逐行捞下标，
// 中间行步长在 cycle-2j 与 2j 之间交替（两步之和 = cycle，翻面 step = cycle - step），
// 首尾行步长恒为 cycle。提交到 LeetCode 时，只粘贴 class Solution 那一段。

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string c;
        int cycle = 2 * numRows - 2;
        int n = s.size();
        for (int j = 0; j < numRows; j++) {
            int step = cycle - 2 * j;
            if (step == 0) step = cycle;
            int i = j;
            while (i < n) {
                c += s[i];
                i += step;
                if (j != 0 && j != numRows - 1)
                    step = cycle - step;
            }
        }
        return c;
    }
};

int main() {
    Solution sol;
    cout << sol.convert("PAYPALISHIRING", 3) << " | 期望 PAHNAPLSIIGYIR" << endl;
    cout << sol.convert("PAYPALISHIRING", 4) << " | 期望 PINALSIGYAHRPI" << endl;
    cout << sol.convert("A", 1) << " | 期望 A" << endl;
    return 0;
}

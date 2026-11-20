// LeetCode 热题 100 第 5 题：最长回文子串
// 题目链接：https://leetcode.cn/problems/longest-palindromic-substring/
// 规矩照旧：下面 class Solution 里的函数体全部你手写；外围（头文件、main、样例）我搭好。
// 提交到 LeetCode 时，只粘贴 class Solution 那一段。

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 int expand(string s,int i,int j){
        while(i>0&&j<s.size()-1&&s[i-1]==s[j+1]){
            i--;
            j++;
        }
        return j-i+1;
       }
    string longestPalindrome(string s) {
        int max=0;
        int a,b,c,d;
        for(int i=0;i<s.size();i++){
            a=expand(s,i,i);
            if (max<a)max=a,b=i-a/2,c=i+a/2;
            if(s[i]==s[i+1]){
                a=expand(s,i,i+1);
                 if (max<a)max=a,b=i-a/2+1,c=i+a/2;
            }
        }
        return s.substr(b,max);
        return "";
    }
};

// ===== 以下外围不用动 =====

bool isPalindromeStr(const string& t) {
    int i = 0, j = (int)t.size() - 1;
    while (i < j) {
        if (t[i] != t[j]) return false;
        i++; j--;
    }
    return true;
}

int main() {
    Solution sol;
    struct Case { string s; int maxLen; };
    vector<Case> cases = {
        {"babad", 3},             // 样例1："bab" 或 "aba" 都算对
        {"cbbd", 2},              // 样例2："bb"
        {"a", 1},                 // 样例3
        {"forgeeksskeegfor", 10}, // 附加："geeksskeeg"
    };
    for (size_t i = 0; i < cases.size(); i++) {
        string got = sol.longestPalindrome(cases[i].s);
        bool ok = (int)got.size() == cases[i].maxLen
                  && isPalindromeStr(got)
                  && cases[i].s.find(got) != string::npos;
        cout << "样例" << i + 1 << ": 输入 \"" << cases[i].s
             << "\"，期望最长长度 " << cases[i].maxLen
             << "，得到 \"" << got << "\""
             << (ok ? "  PASS" : "  FAIL") << "\n";
    }
    return 0;
}

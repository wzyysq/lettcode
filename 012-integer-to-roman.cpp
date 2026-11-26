class Solution {
public:
    string intToRoman(int num) {
        int val;
        string s="";
        vector<int> vals = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> syms = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for(int j=0;j<vals.size();j++){
            val=vals[j];
            while(num>=val){
                num-=val;
                s=s+syms[j];
            }
        }
        return s;
    }
};

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

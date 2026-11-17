class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>last;
        int a=0;
        int count=0;
        int max=0;
        for(int i=0;i<s.size();i++){
            if(last.count(s[i])==0){
                last[s[i]]=i;
                count++;
            }else{
                for(a;a<=last[s[i]];a++){
                    last.erase(s[a]);
                    count--;
                }
                 last[s[i]]=i;
                count++;
            }

                if(max<count)max=count;
        }

        return max;
    }
};

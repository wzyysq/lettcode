class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int c=1;

            for(int i=0;i<strs[0].size();i++){
                        char a=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(a!=strs[j][i]){
                    c=0;
                    break;
                }
            }if(!c)break;
            s=s+a;
            }
   return s; }
};

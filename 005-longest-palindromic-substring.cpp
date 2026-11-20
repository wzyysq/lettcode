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

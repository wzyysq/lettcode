class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        long long ans=0;
        int step=1;
        while(i<s.size()&&s[i]==' '){
            i++;
        }for(int j=i;j<s.size();j++){
            if(j==i&&(s[i]=='+'||s[i]=='-')){
                if(s[i]=='-'){
                    step=-1;
                    continue;
                }else{continue;}
            }
            if(s[j]>='0'&&s[j]<='9'){
             if(step==1)
                {ans=ans*10+s[j]-'0';}
            else{
                ans=ans*10-(s[j]-'0');
            }}
            if(ans<INT_MIN){
                return INT_MIN;
            }else if(ans>INT_MAX){
                return INT_MAX;
            }if(s[j]<'0'||s[j]>'9')break;
        }
        return ans;
        
    }
};

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int bal=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(bal!=0) ans.push_back(s[i]);
                bal++;
            }else {
                if(bal!=1) ans.push_back(s[i]);
                bal--;
            }
        }return ans;
    }
};
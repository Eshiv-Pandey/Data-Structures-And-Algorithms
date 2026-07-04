class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int bal=0;
        for(int i=0;i<s.size();i++){
            if(bal==0 && s[i]=='('){
                bal++;
            }else if(s[i]==')' && bal==1){
                bal--;
            }
            else{
                if(s[i]=='(') bal++;
                else bal--;
                ans.push_back(s[i]);
            }

        }return ans;
    }
};
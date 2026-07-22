class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        if(k==num.size()) return "0";
        for(int i=0;i<num.size();i++){
            while(!st.empty() && st.top()>num[i] && k){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k--) st.pop();
        
        string ans(st.size(),'0');
        for(int i=st.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        int i=0;
        while(i<ans.size()){
            if(ans[i]=='0') i++;
            else break;
        }ans=ans.substr(i);
        return ans.empty()?"0":ans;
    }
};
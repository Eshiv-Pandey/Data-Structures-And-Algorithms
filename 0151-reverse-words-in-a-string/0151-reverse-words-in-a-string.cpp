class Solution {
public:
    string reverseWords(string s) {
        string ans="",word="";
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ') word+=s[i];
            else{
                if(word.size()==0) continue;
                reverse(word.begin(),word.end());
                ans+=(word+" ");
                word="";
            }
        }reverse(word.begin(),word.end());
        ans+=word;
        if(ans.back()==' ') ans.pop_back();
        
        return ans;
    }
};
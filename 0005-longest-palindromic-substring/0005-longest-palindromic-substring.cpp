class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<s.size();i++){
            int start=i,end=i;
            while(start>=0 && end<n && s[start]==s[end]){
                start--;
                end++;
            }string temp=s.substr(start+1,end-start-1);
            if(temp.size()>ans.size()) ans=temp;
        }
        for(int i=0;i<s.size();i++){
            int start=i,end=i+1;
            while(start>=0 && end<n && s[start]==s[end]){
                start--;
                end++;
            }string temp=s.substr(start+1,end-start-1);
            if(temp.size()>ans.size()) ans=temp;
        }return ans;
        

    }
};
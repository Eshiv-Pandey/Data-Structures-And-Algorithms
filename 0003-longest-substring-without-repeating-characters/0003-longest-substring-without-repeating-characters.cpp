class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,maxi=0;
        set<char> st;
        while(l<=r && r<s.size()){
            if(st.find(s[r])!=st.end()){
                while(s[l]!=s[r]){
                    st.erase(s[l++]);
                }
                st.erase(s[l++]);
            }st.insert(s[r]);

            maxi=max(maxi,r-l+1);
            r++;
        }return maxi;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,maxi=0;
        set<char> st;
        for(int i=0;i<s.size();i++){
            while(st.find(s[i])!=st.end()) st.erase(s[l++]);
            st.insert(s[i]);
            maxi=max(maxi,i-l+1);
        }return maxi;
    }
};
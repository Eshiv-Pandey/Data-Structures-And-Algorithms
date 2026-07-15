class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        if(word.find(ch)>word.size()) return word;
        for(int i=0;i<word.size();i++){
            st.push(word[i]);
            if(word[i]==ch) break;
        }
        int i=0;
        while(i<word.size() && !st.empty()){
            word[i]=st.top();
            st.pop();
            i++;
        }return word;
    }
};
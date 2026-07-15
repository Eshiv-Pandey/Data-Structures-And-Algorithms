class Solution {
public:
    string reversePrefix(string word, char ch) {
        int start=0,end=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){ end=i; break;}
        }
        if(end==0) return word;
        reverse(word.begin(),word.begin()+end+1);
        return word;
    }
};
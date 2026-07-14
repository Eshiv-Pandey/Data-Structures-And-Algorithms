class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        while(word.size()<k){
            string temp="";
            for(int j=0;j<word.size();j++){
                if(word[j]=='z'){ 
                    temp+="a";
                    continue;
                }
                temp+=word[j]+1;
            }
            word+=temp;
        }return word[k-1];
    }
};
class Solution {
public:
    int maxFreqSum(string s) {
        int vowel=0,conso=0;
        unordered_map<char,int> mp;
        for(auto it:s){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.first =='a' || it.first =='e' || it.first =='i' || it.first =='o' || it.first =='u') vowel=max(vowel,it.second);
            else conso=max(conso,it.second);
        }return vowel+conso;
    }
};
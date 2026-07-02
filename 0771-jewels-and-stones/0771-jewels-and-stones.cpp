class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(auto it:stones){
            if(jewels.find(it)<jewels.size()) count++;
        }return count;
    }
};
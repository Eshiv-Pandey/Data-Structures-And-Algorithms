class Solution {
public:
    bool rotateString(string s, string goal) {
        goal+=goal;
        if(goal.find(s)<goal.size()) return true;
        return false;
    }
};
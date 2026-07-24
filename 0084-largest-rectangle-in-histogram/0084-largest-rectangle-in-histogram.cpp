class Solution {
public:
    vector<int> nse(vector<int> heights){
        stack<int> st;
        vector<int> nextgr(heights.size());
        for(int i=heights.size()-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            nextgr[i]=st.empty()?heights.size():st.top();
            st.push(i);
        }
        return nextgr;
    }

    vector<int> pse(vector<int> heights){
        stack<int> st;
        vector<int> prevgr(heights.size());
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.top()]>heights[i]) st.pop();
            prevgr[i]=st.empty()?-1:st.top();
            st.push(i);
        }return prevgr;
    }
    int largestRectangleArea(vector<int>& heights) {
        int maxi=INT_MIN;
        vector<int> nextgr=nse(heights);
        vector<int> prevgr=pse(heights);
        for(int i=0;i<heights.size();i++){
            int rect=(nextgr[i]-prevgr[i]-1)*heights[i];
            maxi=max(maxi,rect);
        }return maxi;
    }
};
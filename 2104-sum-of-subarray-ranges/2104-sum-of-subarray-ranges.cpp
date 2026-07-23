class Solution {
public:

    vector<int> nxtg(vector<int> nums){
        stack<int> st;
        vector<int> nextgret(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<=nums[i]) st.pop();
            nextgret[i]=st.empty()?nums.size():st.top();
            st.push(i);
        }return nextgret;
    }

    vector<int> prevg(vector<int> nums){
        stack<int> st;
        vector<int> prevgret(nums.size());
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && nums[st.top()]<nums[i]) st.pop();
            prevgret[i]=st.empty()?-1:st.top();
            st.push(i);
        }return prevgret;
    }

    long long sumSubarrayMaxs(vector<int> nums){
        vector<int> nextgret=nxtg(nums);
        vector<int> prevgret=prevg(nums);
        long long larg=0;
        for(int i=0;i<nums.size();i++){
            int left=nextgret[i]-i;
            int right=i-prevgret[i];
            larg=(larg+((1LL*(right)*(left)*nums[i])));
        }return larg;
    }
    vector<int> psee(vector<int>& nums){
        stack<int> st;
        vector<int> psee(nums.size());
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && nums[st.top()]>=nums[i]) st.pop();
            psee[i]=st.empty()?-1:st.top();
            st.push(i);
        }return psee;
    }

    vector<int> nse(vector<int>& nums){
        stack<int> st;
        vector<int> nse(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>nums[i]) st.pop();
            nse[i]=st.empty()?nums.size():st.top();
            st.push(i);
        }return nse;
    }

    long long sumSubarrayMins(vector<int>& nums) {
        long long sum=0;
        vector<int> prev=psee(nums);
        vector<int> next=nse(nums);
        for(int i=0;i<nums.size();i++){
            int left=prev[i],right=next[i];
            sum=(sum+((1LL*(right-i)*(i-left)*nums[i])));
        }return sum;

    }

    long long subArrayRanges(vector<int>& nums) {
        long long larg=sumSubarrayMaxs(nums);
        long long mini=sumSubarrayMins(nums);
        return larg-mini;
    }
};
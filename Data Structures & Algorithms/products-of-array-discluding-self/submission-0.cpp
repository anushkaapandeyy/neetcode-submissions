class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n);
        vector<int>pref(n); //all prod before i
        vector<int>suff(n); // all prod after 1
        pref[0] = 1; //nothing before this ele
        suff[n-1] = 1; // nothing after this ele
        for(int i=1;i<n;i++)
        {
            pref[i] = nums[i-1]*pref[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            suff[i] = nums[i+1]*suff[i+1];
        }
        for(int i=0;i<n;i++)
        res[i] = pref[i]*suff[i];
        return res;
    }
};

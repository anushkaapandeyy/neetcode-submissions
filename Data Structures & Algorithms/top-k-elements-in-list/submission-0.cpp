class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        //convert to vector and sort
        for(auto& i:nums)
        {
            mp[i]++;
        }
        vector<pair<int,int>>ar;
        for(auto& p: mp)
        {
            ar.push_back({p.second,p.first});
        }
        sort(ar.rbegin(),ar.rend()); //most freq on top
        vector<int>res;
        for(int i=0;i<k;i++)
        {
            res.push_back(ar[i].second);
        }
return res;
    }
};

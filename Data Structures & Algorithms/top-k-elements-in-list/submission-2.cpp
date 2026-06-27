class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        for(int num : nums)
        m[num]++;
        vector<pair<int, int>>v;
        for(const auto& p : m)
        v.push_back({p.second, p.first});
        sort(v.rbegin(),v.rend());
        vector<int>res;
        for(int i=0;i<k;i++)
        res.push_back(v[i].second);
        return res;
    }
};

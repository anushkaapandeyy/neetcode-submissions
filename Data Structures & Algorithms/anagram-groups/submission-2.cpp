class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>>m;
        for(auto i:strs)
        {
            string sorted = i;
            sort(sorted.begin(),sorted.end());
            m[sorted].push_back(i);
        }
        for(auto& p:m)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};

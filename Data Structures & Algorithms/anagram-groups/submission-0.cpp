class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        //sort each string and group them in hashmap
        unordered_map<string, vector<string>>res;
        for(auto& i:strs)
        {
            string one = i;
            sort(one.begin(),one.end());
            res[one].push_back(i);
        }
        for(auto& pair : res)
        {
            result.push_back(pair.second);
        }
        return result;
        
    }
};

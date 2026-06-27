class Solution {
public:

    string encode(vector<string>& strs) {
        //using delimitter after each word
        //length#word
        string ans = "";
        for(const string& i:strs)
        {
            ans += to_string(i.size())+"#"+i;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>decoded;
        int i=0;
        while(i<s.size())
        {
            int j = i;
            while(s[j]!='#')
            {
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            i = j + 1;
            j = i + len;
            decoded.push_back(s.substr(i, len));
            i = j;
        }
        return decoded;
    }
};

class Solution {
public:

    string encode(vector<string>& strs) {
int l = strs.size();
string result;
for (int i=0;i<l;i++)
{
int k = strs[i].length();
result += std::to_string(k);
result += "#";
result +=strs[i];
}
return result;
    }

    vector<string> decode(string s) {
int l = s.length();
vector<string>ans;
int i = 0;
while(i<s.length())
{
    int j = i;
    while(s[j]!='#')
    j++;
    int len = stoi(s.substr(i, j-i));
    j++;
    ans.push_back(s.substr(j, len));
    i = j+len;
}
return ans;
    }
};

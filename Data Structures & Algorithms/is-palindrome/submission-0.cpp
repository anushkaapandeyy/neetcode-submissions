class Solution {
public:
    bool isPalindrome(string s) {
        //reverese the string
        string newS = "";
        for(char c:s)
        {
            if(isalnum(c)){
                newS+=tolower(c);
            }
        }
        return newS == string(newS.rbegin(),newS.rend());
    }
};

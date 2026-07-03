class Solution:
    def isValid(self, s: str) -> bool:
        s2 = []
        matches = {
        ")": "(",
        "]": "[",
        "}": "{"
        }
        for i in range (len(s)):
            if  s[i] == "{" or s[i] == '[' or s[i] == "(":
                s2.append(s[i])
            elif  s[i] == "}" or s[i] == ']' or s[i] == ")":
                if not s2:
                    return False
                elif s2[-1] != matches[s[i]]:
                    return False
                else:
                    s2.pop()
        return not s2
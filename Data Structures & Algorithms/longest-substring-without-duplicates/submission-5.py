class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = 0
        max_l = 0
        seen = set()
        for i in range(len(s)):
            if s[i] in seen:
                while s[i] in seen:
                    seen.remove(s[left])
                    left += 1
            seen.add(s[i])
            max_l = max(max_l, len(seen)) 
        return max_l
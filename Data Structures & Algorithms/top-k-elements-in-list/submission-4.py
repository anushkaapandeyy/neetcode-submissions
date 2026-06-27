class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        for num in nums:
            if num in freq:
                freq[num] +=1
            else:
                freq[num] = 1
            
        #sort by frequency
        sorted_items = sorted(
            freq.items(),
            key=lambda x: x[1],
            reverse=True
        )
        result = []
        for num, count in sorted_items[:k]:
            result.append(num)
        return result
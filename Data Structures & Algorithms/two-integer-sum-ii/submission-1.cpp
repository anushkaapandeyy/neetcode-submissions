class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //two pointer
        int n = numbers.size();
        vector<int>ans;
        int p1 = 0,p2 = n-1;
    while(p1<p2)
        {
            int cursum = numbers[p1]+numbers[p2];
            if(cursum > target)
            {
                p2--;
            }
            else if(cursum < target)
            {
                p1++;
            }
            else
            {
                return{p1+1,p2+1};
            }
        }
    }
};

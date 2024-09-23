#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSubArray(vector<int> &nums)
    {
        int maxi = INT_MIN;
        int sum = 0;
        int start = 0;
        int subStart, subEnd;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (sum == 0)
                start = i;
            sum += nums[i];
            if (sum > maxi)
            {
                maxi = sum;
                subStart = start;
                subEnd = i;
            }
            if (sum < 0)
                sum = 0;
        }
        for (int i = subStart; i <= subEnd; i++)
        {
            result.push_back(nums[i]);
        }

        return result;
    }
};

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution sol;
    vector<int> result = sol.maxSubArray(nums);
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}
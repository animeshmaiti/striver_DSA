#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int count0 = 0, count1 = 0, count2 = 0;
        for (auto it : nums)
        {
            if (it == 0)
            {
                count0++;
            }
            else if (it == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        for (int i = 0; i < count0; i++)
        {
            nums[i] = 0;
        }
        for (int i = count0; i < count0 + count1; i++)
        {
            nums[i] = 1;
        }
        for (int i = count0 + count1; i < count0 + count1 + count2; i++)
        {
            nums[i] = 2;
        }
    }
};

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Solution sol;
    sol.sortColors(nums);
    for (auto it : nums)
    {
        cout << it << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        map<int, int> mp;
        for (auto it : nums)
        {
            if (mp[it] == 0)
            {
                mp[it]++;
            }
            else
            {
                return it;
                break;
            }
        }
        return 0;
    }
};

int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};
    Solution sol;
    cout << sol.findDuplicate(nums);
    return 0;
}
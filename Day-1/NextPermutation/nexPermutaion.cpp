#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int ind = -1; // break point
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                ind = i;
                break;
            }
        }

        if (ind != -1)
        {
            for (int i = n - 1; i >= ind; i--)
            {
                if (nums[i] > nums[ind])
                {
                    swap(nums[i], nums[ind]);
                    break;
                }
            }
            reverse(nums.begin() + ind + 1, nums.end());
        }
        else
        {
            reverse(nums.begin(), nums.end());
        }
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            cout << nums[i];
            if (i != n - 1)
            {
                cout << ",";
            }
        }
        cout << "]";
    }
};

int main()
{
    vector<int> nums = {3, 2, 1};
    Solution sol;
    sol.nextPermutation(nums);
    return 0;
}
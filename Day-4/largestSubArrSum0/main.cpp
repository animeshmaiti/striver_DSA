#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxLen(vector<int> &arr, int n)
    {
        unordered_map<int, int> mpp;
        int maxi = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0)
            {
                maxi = i + 1;
            }
            else
            {
                if (mpp.find(sum) != mpp.end())
                {
                    maxi = max(maxi, i - mpp[sum]);
                }
                else
                {
                    mpp[sum] = i;
                }
            }
        }

        return maxi;
    }
};

int main()
{
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = arr.size();
    Solution sol;
    cout<<sol.maxLen(arr,n);
    return 0;
}
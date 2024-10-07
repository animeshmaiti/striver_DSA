#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        for (int i = 0; i < n; i++)
        {
            int start = intervals[i][0];
            int end = intervals[i][1];
            if (!merged.empty() && end <= merged.back()[1])
            {
                continue;
            }
            for (int j = i + 1; j < n; j++)
            {
                if (intervals[j][0] <= end)
                {
                    end = max(end, intervals[j][1]);
                }
                else
                {
                    break;
                }
            }
            merged.push_back({start,end});
        }
        return merged;
    }
};

int main()
{
    vector<vector<int>> intervals = {{1, 5}, {4, 6}, {8, 10}, {15, 18}};
    Solution sol;
    vector<vector<int>> result = sol.merge(intervals);
    for (auto it : result)
    {
        cout << "{";
        for (auto it1 : it)
        {
            cout << it1 << ",";
        }
        cout << "},";
    }
    return 0;
}
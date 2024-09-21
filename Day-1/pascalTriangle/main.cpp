#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;
        int ans = 1;
        for (int i = 1; i <= numRows; i++)
        {
            res.push_back({1});
            for (int j = 1; j < i; j++)
            {
                ans = ans * (i - j);
                ans = ans / j;
                res[i-1].push_back(ans);
            }
        }
        return res;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> result = sol.generate(6);
    for (auto it : result)
    {
        for(auto inIt:it){
            cout<<inIt<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
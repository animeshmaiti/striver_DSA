#include <bits/stdc++.h>
using namespace std;

// brute force self
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> zeroes;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    zeroes.push_back({i, j});
                }
            }
        }
        // {i,j} i fixed
        int mZero = zeroes.size();
        for (int i = 0; i < mZero; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[zeroes[i][0]][j] = 0;
            }
        }
        // {i,j} j fixed
        for (int i = 0; i < mZero; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[j][zeroes[i][1]] = 0;
            }
        }
    }
};

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    Solution sol;
    sol.setZeroes(matrix);
    for (auto it : matrix)
    {
        for (auto inIt : it)
        {
            cout<<inIt<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
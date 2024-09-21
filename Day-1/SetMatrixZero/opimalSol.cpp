#include <bits/stdc++.h>
using namespace std;

// brute force self
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();    // col -> matrix[0][..]
        int n = matrix[0].size(); // row -> matrix[..][0]
        vector<vector<int>> zeroes;
        int col0 = 1;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    if (j != 0)
                    {
                        matrix[0][j] = 0;
                    }
                    else
                    {
                        col0 = 0;
                    }
                }
            }
        }

        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (matrix[i][j] != 0)
                {
                    if (matrix[0][j] == 0 || matrix[i][0] == 0)
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        if (matrix[0][0]==0)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[0][j]=0;
            }
        }
        if (col0==0)
        {
            for (int i = 0; i < n; i++)
            {
                matrix[i][0]=0;
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
            cout << inIt << " ";
        }
        cout << "\n";
    }
    return 0;
}
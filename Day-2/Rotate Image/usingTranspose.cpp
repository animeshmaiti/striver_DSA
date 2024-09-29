#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int row = matrix.size(), col = matrix[0].size();
        for (int i = 0; i < row-1; i++)
        {
            for (int j = i+1; j < row; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for (int i = 0; i < row; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution sol;
    sol.rotate(matrix);
    for (auto it : matrix)
    {
        cout << "{";
        for (auto it2 : it)
        {
            cout << it2 << ",";
        }
        cout << "},";
    }
    return 0;
}
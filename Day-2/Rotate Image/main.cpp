#include <bits/stdc++.h>
using namespace std;

// space O(n^2)
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        vector<int> colToRow;
        vector<vector<int>> result;
        int row = matrix.size(), col = matrix[0].size();
        for (int j = 0; j < col; j++)
        {
            for (int i = row - 1; i >= 0; i--)
            {
                colToRow.push_back(matrix[i][j]);
            }
            result.push_back(colToRow);
            colToRow.clear();
        }
        int i=0;
        for(auto it:result){
            matrix[i]=it;
            i++;           
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
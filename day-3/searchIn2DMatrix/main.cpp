#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i = 0; i < row; i++)
        {
            if(matrix[i][0]<=target && matrix[i][col-1]>=target){
                int low=0,high=col-1;
                while (low<=high)
                {
                    int mid = low+(high-low)/2;
                    if(matrix[i][mid]==target){
                        return true;
                    }
                    if (matrix[i][mid]<target)
                    {
                        low=mid+1;
                    }else{
                        high=mid-1;
                    }
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    cout << sol.searchMatrix(matrix, 4);
    return 0;
}
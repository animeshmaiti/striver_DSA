#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0,high=m*n-1;
        while (low<=high)
        {
            int mid = (low+high)/2;
            int row=mid/n,col=mid%n;
            if(matrix[row][col]==target){
                return true;
            }
            if(matrix[row][col]<target){
                low=mid+1;
            }else{
                high = mid-1;
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    cout << sol.searchMatrix(matrix, 5);
    return 0;
}
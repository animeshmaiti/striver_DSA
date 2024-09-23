#include <bits/stdc++.h>
using namespace std;
// kadane's algo
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        for (auto it : nums)
        {
            sum += it;
            maxi = max(maxi, sum);
            if (sum<0) sum=0;
        }
        return maxi;
    }
};

int main(){
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;
    cout<<sol.maxSubArray(nums);
    return 0;
}
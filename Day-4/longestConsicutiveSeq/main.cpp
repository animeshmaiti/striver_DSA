#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int lastSmaller=INT_MIN;
        int cnt = 0;
        int longest=1;
        for (int i = 0; i < n; i++)
        {
            if(nums[i]-1==lastSmaller){
                cnt++;
                lastSmaller=nums[i];
            }else if(lastSmaller!=nums[i]){
                lastSmaller = nums[i];
                cnt=1;
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};

int main(){
    Solution sol;
    vector<int>nums={100,101,102,4,200,1,3,2};
    cout<<sol.longestConsecutive(nums);
    return 0;
}
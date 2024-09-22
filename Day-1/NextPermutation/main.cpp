#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // in next file implementing next_permutation function
        next_permutation(nums.begin(),nums.end());
        cout<<"[";
        for (int i = 0; i < nums.size(); i++)
        {
            cout<<nums[i];
            if(i!=nums.size()-1){
                cout<<",";
            }
        }
        cout<<"]";
    }
};

int main(){
    vector<int>nums={1,2,3};
    Solution sol;
    sol.nextPermutation(nums);
    return 0;
}
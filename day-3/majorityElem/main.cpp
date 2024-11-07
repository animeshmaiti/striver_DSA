#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        for(const auto& entry:mp){
            if(entry.second>(n/3)){
                ans.push_back(entry.first);
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}
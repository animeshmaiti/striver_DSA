#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>&nums,int d){
    int n = nums.size();
    reverse(nums.begin(),nums.begin()+d);
    reverse(nums.begin()+d,nums.begin()+n);
    reverse(nums.begin(),nums.end());
}

int main(){
    vector<int>nums={1,2,3,4,5,6,7,8};
    int d = 3; 
    leftRotate(nums,d);
    for(auto it:nums){
        cout<<it<<" ";
    }
    return 0;
}
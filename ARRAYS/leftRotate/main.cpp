#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> &nums, int d)
{
    int n = nums.size();
    d=d%n;
    vector<int>temp;
    for(int i =0;i<d;i++){
        temp.push_back(nums[i]);
    }
    for (int i = d; i < n; i++)
    {
        nums[i-d]=nums[i];
    }
    int j=0;
    for (int i = n-d; i < n; i++)
    {
        nums[i]=temp[j];
        j++;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    int d = 3;
    leftRotate(nums, d);
    for (auto it : nums)
    {
        cout<<it<<" ";
    }
    return 0;
}
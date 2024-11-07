#include <bits/stdc++.h>
using namespace std;

int countXorSubArr(vector<int> &arr, int k)
{
    int n = arr.size();
    int xr = 0;
    map<int,int>mpp;
    mpp[xr]++;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
       xr=xr^arr[i];
       int x=xr^k;
       cnt+=mpp[x];
       mpp[xr]++;
    }
    return cnt;
}

int main()
{

    return 0;
}
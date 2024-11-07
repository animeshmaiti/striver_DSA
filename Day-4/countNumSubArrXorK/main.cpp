#include <bits/stdc++.h>
using namespace std;

int countXorSubArr(vector<int> &arr, int k)
{
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int xr = 0;
        for (int j = i; j < n; j++)
        {
            xr = xr ^ arr[j];
            if (xr == k)
                cnt++;
        }
    }
    return cnt;
}

int main()
{

    return 0;
}
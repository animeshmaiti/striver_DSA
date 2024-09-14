#include <bits/stdc++.h>
using namespace std;

int getLongestSubArray(vector<int> &a, int k)
{
    int n = a.size(); // size of the array.

    int len = 0;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = i; j < n; j++)
        {
            s += a[j];

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main()
{

    return 0;
}
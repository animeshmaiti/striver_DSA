#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lenOfLongSubArr(int A[], int N, int K)
    {

        map<int, int> preSumMap;
        int sum = 0;
        int maxLen = 0;
        for (int i = 0; i < N; i++)
        {
            // calculate the prefix sum till index i:
            sum += A[i];

            // if the sum = k, update the maxLen:
            if (sum == K)
            {
                maxLen = max(maxLen, i + 1);
            }

            // calculate the sum of remaining part i.e. x-k:
            int rem = sum - K;

            // Calculate the length and update maxLen:
            if (preSumMap.find(rem) != preSumMap.end())
            {
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }

            // Finally, update the map checking the conditions:
            if (preSumMap.find(sum) == preSumMap.end())
            {
                preSumMap[sum] = i;
            }
        }

        return maxLen;
    }
};

int main()
{

    return 0;
}
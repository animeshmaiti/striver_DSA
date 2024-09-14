#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
     int lenOfLongSubArr(int A[],  int N, int K) 
    {
        int right=0,left=0;
        int sum=A[0];
        int len=0;
        while (right<N)
        {
            while (left<=right && sum>K)
            {
                sum-=A[left];
                left--;
            }
            if (sum==K)
            {
                len = max(len,right-left+1);
            }
            right++;
            if (right<N)
            {
                sum+=A[right];
            }
        }
        return len;
    } 
};

int main(){
    
    return 0;
}
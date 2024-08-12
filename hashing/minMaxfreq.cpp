#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n = 6;
    int arr[n] = {10, 5, 10, 15, 10, 5};

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int maxEle, maxFreq, minEle, minFreq=n;
    for (auto it : mp)
    {
        int count=it.second;
        int ele=it.first;
        if(count>maxFreq){
            maxEle=ele;
            maxFreq=count;
        }
        if (count<minFreq)
        {
            minEle=ele;
            minFreq=count;
        }
    }
    cout<<maxEle<<" "<<minEle;

    return 0;
}
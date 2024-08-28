#include <iostream>
using namespace std;

bool isShorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 6;
    int arr[n] = {1, 2, 8, 4, 5, 6};
    bool result=isShorted(arr,n);
    cout<<result;
    return 0;
}
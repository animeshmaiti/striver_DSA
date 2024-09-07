#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int arr[n] = {1, 8, 7, 7, 5, 6, 3, 4};
    int largest = arr[0];
    int secLargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secLargest && arr[i] != largest)
        {
            secLargest = arr[i];
        }
    }
    cout << "largest:" << largest << " secLarge:" << secLargest;

    return 0;
}
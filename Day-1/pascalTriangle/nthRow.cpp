#include <bits/stdc++.h>
using namespace std;

void nthRowPascalTriangle(int row)
{
    int ans = 1;
    cout << ans << " ";
    // ans * (ans-col)/col
    for (int i = 1; i < row; i++)
    {
        ans = ans * (row - i);
        ans = ans / i;
        cout << ans << " ";
    }
}

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        nthRowPascalTriangle(i);
        cout<<"\n";
    }
    return 0;
}
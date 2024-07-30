#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for (int m = 0; m <n ; m++)
    {
        for (int i = 1; i <= m+1; i++)
        {
            cout<<i;
        }
        for (int j = n-1; j > m; j--)
        {
            cout<<' ';
            // cout<<1;
        }
        for (int k = n-1; k > m ; k--)
        {
            cout<<' ';
            // cout<<1;
        }
        for (int l = m+1; l > m; l--)
        {
            for (int o = l; o >0 ; o--)
            {
                cout<<o;
            }
        }
        cout<<endl;
    }
    
    return 0;
}
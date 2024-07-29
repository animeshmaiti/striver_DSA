#include <iostream>
using namespace std;

int main(){
    int n=5,p=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<' ';
        }
        for (int k = p+(p-1); k > 0; k--)
        {
            cout<<'*';
        }
        p--;
        cout<<endl;
    }
    
    return 0;
}
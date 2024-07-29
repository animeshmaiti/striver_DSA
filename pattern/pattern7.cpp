#include <iostream>
using namespace std;

int main(){
    int n=5,p=0;
    for (int i = 0; i < n; i++)
    {
        // int p=i;
        for (int j = n-1; j >i; j--)
        {
            cout<<' ';
        }
        for (int k = 0; k <= p; k++)
        {
            cout<<'*';
        }
        p+=2;
        cout<<endl;
    }
        
    return 0;
}
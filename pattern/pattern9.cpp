#include <iostream>
using namespace std;

void normal_pyramid(int n){
    int p=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > i; j--)
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
}

void inverted_pyramid(int n){
    int p =5;
    for (size_t i = 0; i < n; i++)
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
    
}

int main(){
    int count=5;
    normal_pyramid(count);
    inverted_pyramid(count);
    return 0;
}
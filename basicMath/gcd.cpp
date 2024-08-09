#include <iostream>
#include <algorithm>
using namespace std;

int findGcd(int n1,int n2){
    for (int i = min(n1,n2); i > 0; i--)
    {
        if (n1%i==0 && n2%i==0)
        {
            return i;
        }
    }
    return 1;
}

int main(){
    cout<<findGcd(12,3);
    return 0;
}
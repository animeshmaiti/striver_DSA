#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    int sqrtN=sqrt(n);
    for (int i = 2; i <= sqrtN; i++)
    {
        if (n%i==0 && i!=n)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int n=28;
    cout<<isPrime(n);
    return 0;
}
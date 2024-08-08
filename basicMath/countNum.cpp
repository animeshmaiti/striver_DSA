#include <iostream>
using namespace std;
int digitCount(int n){
    int cnt=0;
    while (n>0)
    {
        cnt++;
        n/=10;
    }
    return cnt;    
}
int main(){
    int N=18839;
    cout<<digitCount(N);
    return 0;
}
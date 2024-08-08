#include <iostream>
using namespace std;
int reverseNum(int N){
    int rev=0;
    while (N>0)
    {
        rev=rev*10+(N%10);
        N/=10;
    }
    return rev;    
}
int main(){
    int num = 2443;
    cout<<reverseNum(num);
    return 0;
}
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
    int num = 2442;
    if (reverseNum(num)==num)
    {
        cout<<"number is palindrome";
    }else{
        cout<<"not palindrome";
    }
    
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n){
    // count the number of digits
    int power = (int)log10(n)+1;
    int sum=0,num=n;
    while (n>0)
    {
        sum+=pow(n%10,power);
        n/=10;
        // cout<<sum<<endl;
    }
    // cout<<sum<<endl;
    if (sum==num)
    {
        return true;
    }
    return false;
}

int main(){
    int n=1634;
    // cout<<isArmstrong(n);
    if (isArmstrong(n))
    {
        cout<<"this armstrong number";
    }else{
        cout<<"not armstrong number";
    }
    
    return 0;
}
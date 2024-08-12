#include <iostream>
using namespace std;

void display1ToN(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    display1ToN(i+1,n);
}

int main(){
    display1ToN(1,5);
    return 0;
}
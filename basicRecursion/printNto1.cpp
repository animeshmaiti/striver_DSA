#include <iostream>
using namespace std;

void printNto1(int n,int i){
    if(n<i) return;
    cout<<n<<" ";
    printNto1(n-1,i);
}

int main(){
    printNto1(5,1);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Row-1 C Col-1
int ncr(int row,int col){
    long long res=1;
    for (int i = 0; i < col; i++)
    {
        res = res*(row-i);
        res = res/(i+1);
    }
    return res;
}

int main(){
    int row=5,col=3;
    cout<<ncr(row-1,col-1);
    return 0;
}
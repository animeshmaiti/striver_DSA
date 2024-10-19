#include <bits/stdc++.h>
using namespace std;
// mathematical Approach
vector<int> MissingAndRepeating(vector<int>arr){
    int n = arr.size();
    // sum of n natural num
    int sumN=(n*(n+1))/2;
    // sum of natural square number
    int SquareSumN=(n*(n+1)*(2*n+1))/6;

    int sum=0,sumSquare=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        sumSquare+=arr[i]*arr[i];
    }
    // val1=sum - sumN :: x-y
    int val1=sum-sumN;
    // val2 = SquareSumN - sumSquare :: x^2-y^2
    int val2 = sumSquare - SquareSumN;
    // (x+y)(x-y)=val2
    // x-y=val2/(x+y)
    // x-y=val2/val1
    val2 = val2/val1;

    int x=(val1+val2)/2;

    int y=x-val1;
    return{x,y};   
}

int main(){
    vector<int>arr={4,3,6,2,1,1};
    vector<int>ans=MissingAndRepeating(arr);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
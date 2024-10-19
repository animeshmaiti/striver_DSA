#include <bits/stdc++.h>
using namespace std;

int countInversion(vector<int>arr){
    int n=arr.size();
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    vector<int>arr={5,3,2,1,4};
    cout<<countInversion(arr);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<int> MissingAndRepeating(vector<int>arr){
    int n = arr.size();
    int repeatNum=-1,missingNum=-1;
    int hash[n+1]={0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 1; i <=n; i++)
    {
        if(hash[i]==2) repeatNum=i;
        if(hash[i]==0) missingNum=i;
        if(repeatNum!=-1&&missingNum!=-1) break;
    }
    
    return {repeatNum,missingNum};
}

int main(){
    vector<int>arr={4,3,6,2,1,1};
    vector<int>ans=MissingAndRepeating(arr);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
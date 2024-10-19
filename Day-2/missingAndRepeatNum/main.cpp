#include <bits/stdc++.h>
using namespace std;

vector<int> MissingAndRepeating(vector<int>arr){
    int n = arr.size();
    int repeatNum=-1,missingNum=-1;
    for (int i = 1; i <= n; i++)
    {
        int cnt=0;
        for (size_t j = 0; j < n; j++)
        {
            if(arr[j]==i){
                cnt++;
            }
        }
        if(cnt==2) repeatNum=i;
        if(cnt==0) missingNum=i;
        if(repeatNum!=-1 && missingNum!=-1) break;
    }
    return {repeatNum,missingNum};
}

int main(){
    vector<int>arr={4,3,6,2,1,1};
    vector<int>ans=MissingAndRepeating(arr);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
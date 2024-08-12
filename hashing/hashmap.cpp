#include <iostream>
#include <map>
using namespace std;

int main(){
    int n=6;
    int arr[n]={1,2,31,3,3,12};
    // for character use map<char,int>
    map<int,int>mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int num;
        cin>>num;
        cout<<mpp[num]<<" ";
    }
    return 0;
}
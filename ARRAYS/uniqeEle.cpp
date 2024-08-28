#include <iostream>
using namespace std;

int main(){
    int n = 9;
    int arr[n]={1,1,2,2,2,3,3,3,3};
    int pointer=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]!=arr[pointer])
        {
            arr[pointer+1]=arr[i];
            pointer++;
        }
    }
    for (int i = 0; i <= pointer; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<pointer;
    return 0;
}
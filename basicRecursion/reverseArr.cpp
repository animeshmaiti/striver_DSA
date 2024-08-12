#include <iostream>
using namespace std;

void revArray(int arr[],int start,int end){
    if(start<end)
    {
        swap(arr[start],arr[end]);
        revArray(arr,start+1,end-1);
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    revArray(arr,0,size(arr)-1);
    for (int i = 0; i < size(arr); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
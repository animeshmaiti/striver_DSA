#include <iostream>
using namespace std;
// Given two unsorted arrays arr1[] and arr2[].
// They may contain duplicates. For each
// element in arr1[] count elements less than or
// equal to it in array arr2[] these numbers
// in different lines.

int main(){
    int arr1[]={1,2,3,4,7,9};
    int arr2[]={0,1,2,1,1,4,5,6,7,8};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    for (int i = 0; i < n1; i++)
    {
        int count=0;
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i]>=arr2[j])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
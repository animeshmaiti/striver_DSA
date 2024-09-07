#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m)
{
    int arr3[n + m];
    int i = 0, j = 0;
    while (i < n || j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[i+j]=arr1[i];
            i++;
        }
        else        
        {
            arr3[i+j]=arr2[j];
            j++;
        }
    }
    for (int i=0; i < n+m; i++)
    {
        cout<<arr3[i]<<" ";
    }
}

int main(){
    int arr1[]={1,3,5,7};
    int arr2[]={2,4,6,8};

    // cout<<sizeof(arr1)<<endl;
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1,arr2,n1,n2);
    return 0;
}
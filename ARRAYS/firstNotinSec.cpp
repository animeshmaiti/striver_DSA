#include <iostream>
using namespace std;
// display element not present in second array but present in first array
int main(){
    int arr1[]={1,2,3,4,5,6,7,10};
    int arr2[]={1,2,3,4,5,6,7,8,9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    bool flag=false;
    // cout<<n1<<" "<<n2;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                flag=true;
                break;
            }
            else if (j==n2-1)
            {
                flag=false;
                cout<<arr1[i]<<" ";
            }
        }
    }
    if (flag==true)
    {
        cout<<"all element is present in second array";
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n =8;
    int arr[n]={1,6,7,7,5,3,4,8};
    int largest=arr[0];
    int secLargest=-1;
    for (int i = 1; i < n; i++)
    {
        if (largest<arr[i])
        {
            secLargest=largest;
            largest=arr[i];
        }
    }
    cout<<"largest:"<<largest<<" secLarge:"<<secLargest;
    
    return 0;
}
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> findDevisors(int n){
    vector<int> devisors;
    int sqrtN=sqrtf(n);
    for (int i = 1; i <= sqrtN; ++i)
    {
        if(n%i==0){
            devisors.push_back(i);
            if (i!=n/i)
            {
                devisors.push_back(n/i);
            }
        }
    }
    return devisors;
}

int main(){
    int n=36;
    vector<int>devisors=findDevisors(n);
    for (auto i : devisors)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    string s = "abdfhbnn";
    int hash[26]={0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++;
    }
    int q=5;
    while (q--)
    {
        char c;
        cin>>c;
        cout<<hash[c-'a']<<" ";
    }
    
    return 0;
}
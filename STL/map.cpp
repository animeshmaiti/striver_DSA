#include <iostream>
#include<map> 
using namespace std;

int main(){
    map<int,int>mp;
    mp[1]=3;
    mp[2]=4;
    mp[3]=5;
    map<int,int>::iterator it =mp.begin();
    while (it !=mp.end())
    {
        cout<<it->first<<":"<<it->second<<endl;
        ++it;
    }
    return 0;
}
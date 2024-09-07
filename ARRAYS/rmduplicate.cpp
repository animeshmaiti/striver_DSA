#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    string name = "bhubaneswar";
    unordered_map<char,int> map;
    // cout<<name.size();
    for (int i = 0; i < name.size(); i++)
    {
        map[name[i]]++;
    }
    for(auto it: map){
        cout<<it.first<<"";
    }
    
    return 0;
}
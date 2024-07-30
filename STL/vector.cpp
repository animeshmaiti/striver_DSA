#include <iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
    vector<int>v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(5);
    // cout<<v[2];
    v.push_back(4);
    // cout<<'\n'<<v[4]<<endl;
    vector<pair<int,int>>vec;
    vec.push_back({3,4});
    // cout<<vec[0].first<<endl;
    vec.emplace_back(6,7);
    // cout<<vec[1].first;
    vector<int>::iterator it = v.begin();
    // cout<<&it<<endl;
    // cout<<*it<<endl;
    vector<int>::iterator it_end=v.end();
    // cout<<*it_end<<endl;
    for (auto it = v.rbegin(); it != v.rend(); ++it)
    {
        cout<<*it<<' ';
    }
    cout<<endl;
    for (auto it =v.begin();it!=v.end();it++)
    {
        cout<<*it<<' ';
    }
    cout<<endl;
    for (auto it : v)
    {
        cout<<it<<' ';
    }
    cout<<endl;
    // 1 2 3 5 4
    v.erase(v.begin(),v.begin()+2);   
    for (auto it : v)
    {
        cout<<it<<' ';
    }
    cout<<endl;
    //insert
    // 3 5 4
    v.insert(v.begin(),2);
    v.insert(v.begin()+2,4);
    v.insert(v.begin()+1,2,10);
    for (auto it : v)
    {
        cout<<it<<' ';
    }
    cout<<'\n'<<v.size();
    return 0;
}
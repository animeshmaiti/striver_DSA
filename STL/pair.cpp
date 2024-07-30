#include <iostream>
#include <utility>
using namespace std;

int main(){
    pair<int,int> p;
    p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>>p2={1,{2,3}};
    cout<<p2.first<<'\n';
    cout<<p2.second.first<<" "<<p2.second.second<<endl;
    pair<int,char>p3[]={{1,'c'},{2,'b'},{3,'d'}};
    cout<<p3[1].first<<' '<<p3[0].second;
    return 0;
}
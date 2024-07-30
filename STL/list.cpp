#include <iostream>
#include<list>
using namespace std;

int main(){
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(3);

    ls.push_front(5);
    ls.emplace_front(6);
    for (auto it : ls)
    {
        cout<<it<<' ';
    }
    
    return 0;
}
#include <iostream>
#include<set>
using namespace std;

int main(){
    set<int>st={1,5,5,3,6,6,3};
    for (auto it : st)
    {
        cout<<it<<' ';
    }

    auto it = st.find(3);
    cout<<'\n'<<*it<<endl;

    it = st.find(8);
    if(*it!=8){
        cout<<"not found"<<endl;
    }else{
        cout<<"found"<<endl;
    }

    auto cnt=st.count(3);
    if (cnt)
    {
        cout<<"found"<<endl;
    }else
    {
        cout<<"not found"<<endl;
    }

    return 0;
}
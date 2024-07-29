#include <iostream>
using namespace std;

void binary_printer(int n,string binary){
    for (int i = 0; i < n; i++)
    {
        if (binary=="0")
        {
            cout<<binary;
            binary="1";
        } else{
            cout<<binary;
            binary="0";
        }
    }
}

void triangle(int n){
    string start="0";
    for (int i = 0; i < n; i++)
    {
        binary_printer(i+1,start);
        if (start=="0")
        {
            start="1";
        }else{
            start="0";
        }
        cout<<endl;
    }
}

int main(){
    triangle(5);
    return 0;
}
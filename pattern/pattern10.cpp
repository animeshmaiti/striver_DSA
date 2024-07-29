#include <iostream>
using namespace std;
void normal_r_triangle(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
}

void inverted_r_triangle(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i ; j--)
        {
            cout<<'*';
        }
        cout<<endl;
    }
}

int main(){
    normal_r_triangle(5);
    inverted_r_triangle(5);
    return 0;
}
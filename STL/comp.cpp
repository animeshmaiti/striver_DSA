#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
    return true;
}
/*sort according to pair's second element ascending order
if second element is same then sort it according first element descending order  
*/
int main()
{
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(a, a + 3, comp);
    for (int i = 0; i < 3; i++)
    {
        cout<<"{"<<a[i].first<<","<<a[i].second<<"}";
    }
    
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    int maxv,minv;
    maxv = max(x, y);
    minv = min(x, y);
    while (minv != 0)
    {
        int t = maxv % minv;
        maxv = minv;
        minv  = t;
    }
    cout << maxv << endl;
}
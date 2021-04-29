#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i ++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
    {
        int v = a[i];
        for (int j = i - 1; j >= 0; j--)
        {
            a[j + 1] = a[j];
            if (a[j] <= v)
                break;
        }
		a[j + 1] = a[j];
		a[j] = v;
        for (int j = 0; j < n; j++)
            cout << a[j] << ' ';
        cout << endl;
    }
}
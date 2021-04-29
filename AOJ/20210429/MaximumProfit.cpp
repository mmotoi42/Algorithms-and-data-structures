#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int r[n];
	for (int i = 0; i < n; i++)
		cin >> r[i];
	int minv = INT_MAX, maxv = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		maxv = max(r[i] - minv, maxv);
		minv = min(minv, r[i]);
	}
	cout << maxv << endl;
}
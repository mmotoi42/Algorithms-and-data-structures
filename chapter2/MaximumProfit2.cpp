#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int maxv = INT_MIN;
	int minv = a[0];
	for (int i = 1; i < n; i++)
	{
		maxv = max(maxv, a[i] - minv);
		minv = min(minv, a[i]);
	}
	cout << maxv << endl;
}
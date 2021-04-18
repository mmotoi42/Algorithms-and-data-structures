#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> r(n);
	for(int i = 0; i < n; i++)
		cin >> r[i];
	int minv = r[0];
	int maxv = INT_MIN;
	for(int i = 0; i < n; i++)
	{
		maxv = max(maxv, r[i] - minv);
		minv = min(minv, r[i]);
	}
	cout << maxv << endl;
}
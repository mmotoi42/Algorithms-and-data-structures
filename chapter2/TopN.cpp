#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(m);
	for (int i = 0; i < m; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;
}
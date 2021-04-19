#include <iostream>
using namespace std;
// 3 2 4 1 5
// 3   4 1 5 : 2
// (3 > 2)
//   3 4 1 5 : 2
// 2 3 4 1 5
// 2 3   1 5 : 4
// 2 3 4 1 5
// 2 3 4   5 : 1
// (4 > 1)
// 2 3   4 5 : 1
// (3 > 1)
// 2   3 4 5 : 1
// (2 > 1)
//   2 3 4 5 : 1
// 1 2 3 4 5
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i < n; i++)
	{
		int j = i - 1;
		int v = a[i];
		while (j >= 0 && v < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;
}
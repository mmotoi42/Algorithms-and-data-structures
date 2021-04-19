#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		int minj = i;
		for (int j = i; j < n; j++)
		{
			if (a[j] < a[minj])
				minj = j;
		}
		int tmp = a[i];
		a[i] = a[minj];
		a[minj] = tmp;
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;
}
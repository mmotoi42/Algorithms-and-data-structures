#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	bool f_swap = true;
	int tmp;
	while (f_swap)
	{
		f_swap = false;
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
				f_swap = true;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;
}
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i < n; i++)
	{
	    for (int j = 0; j < n; j++)
		{
			cout << a[j];
			if (j != n - 1)
			    cout << ' ';
		}
		if (i != n - 1)
		    cout << endl;
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && v < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
	}
	cout << endl;
	for (int j = 0; j < n; j++)
    {
		cout << a[j];
		if (j != n - 1)
		    cout << ' ';
	}
}
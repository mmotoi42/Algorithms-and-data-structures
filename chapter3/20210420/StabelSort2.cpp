#include <iostream>
using namespace std;

typedef struct s_c
{
	char key;
	char val;
}	t_c;

void	bubble(int n, t_c a[])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j].val > a[j + 1].val)
			{
				t_c t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}

void	selection(int n, t_c a[])
{
	for (int i = 0; i < n; i++)
	{
		int minj = i;
		for (int j = i; j < n; j++)
		{
			if (a[minj].val > a[j].val)
				minj = j;
		}
		t_c t = a[minj];
		a[minj] = a[i];
		a[i] = t;
	}
}

int main()
{
	int n;
	cin >> n;
	
	t_c og[n];
	for (int i = 0; i < n; i++)
		cin >> og[i].key >> og[i].val;
	
	t_c cp[n];
	for (int i = 0; i < n; i++)
		cp[i] = og[i];

	bubble(n, og);
	for (int i = 0; i < n; i++)
		cout << og[i].key << og[i].val << ' ';
	cout << endl;
	cout << "Stable" << endl;
	selection(n, cp);
	for (int i = 0; i < n; i++)
		cout << cp[i].key << cp[i].val << ' ';
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (og[i].key != cp[i].key)
		{
			cout << "Not stable" << endl;
			return (0);
		}
	}
	cout << "Stable" << endl;
}
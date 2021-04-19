#include <iostream>
using namespace std;

struct Card {
	char suit;
	char value;
};

void	bubble(struct Card a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j >= i + 1; j--)
		{
			if (a[j].value < a[j - 1].value)
			{
				Card t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}

void	selection(struct Card a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int minj = i;
		for (int j = i; j < n; j++)
		{
			if (a[j].value < a[minj].value)
				minj = j;
		}
		Card t = a[i];
		a[i] = a[minj];
		a[minj] = t;
	}
}

void	print(struct Card a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i > 0) cout << " ";
		cout << a[i].suit << a[i].value;
	}
	cout << endl;
}

bool isStable(struct Card C1[], struct Card C2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (C1[i].suit != C2[i].suit)
			return (false);
	}
	return (true);
}

int main()
{
	Card C1[100], C2[100];
	int n;
	char ch;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> C1[i].suit >> C1[i].value;

	for (int i = 0; i < n; i++)
		C2[i] = C1[i];

	bubble(C1, n);
	selection(C2, n);

	print(C1, n);
	cout << "Stable" << endl;
	print(C2, n);
	if (isStable(C1, C2, n))
		cout << "Stable" << endl;
	else
		cout << "Not Stable" << endl;
	return (0);
}

int main()
{
	int n;
	cin >> n;
	string a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
}
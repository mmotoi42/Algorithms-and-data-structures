#include <stdio.h>

int	BinarySearch(int len, int a[len], int n)
{
	int f = 0;
	int l = len - 1;
	int mid = (l + f) / 2;
	while (f < l)
	{
		mid = (l + f) / 2;
		if (a[mid] == n)
			return (1);
		if (n > a[mid])
			f = mid + 1;
		else if (n < a[mid])
			l = mid - 1;
	}
	return (0);
}

int main()
{
	int n;
	scanf("%d",&n);
	int s[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &s[i]);
	int m;
	scanf("%d", &m);
	int t[m];
	for (int i = 0; i < m; i++)
		scanf("%d", &t[i]);
	int cnt = 0;
	for (int i = 0; i < m; i++){
		cnt += BinarySearch(n, s, t[i]);
	}
	printf("%d\n", cnt);
}
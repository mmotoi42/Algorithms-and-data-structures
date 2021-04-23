#include <stdio.h>

int	BinarySearch(int len, int a[len], int n)
{
	// a[mid] < n or a[mid] > n
	int f = 0;
	int l = len - 1;
	int mid = (l + f) / 2;
	int found = 0;
	while (a[mid] != n && f != l)
	{
		if (n > a[mid])
			f = mid + 1;
		else if (n < a[mid])
			l = mid - 1;
		mid = (l + f) / 2;
	}
	if (a[mid] == n)
		found = 1;
	return (found);
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
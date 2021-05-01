#include <iostream>
#include <vector>
using namespace std;

int dp[2005][2005];

int rec(int m, int n, int i, vector<int> a)
{
    if (dp[i][m] == 1 || dp[i][m] == 0)
        return (dp[i][m]);
    
	if (m == 0) dp[i][m] = 1;
	else if (i >= n) dp[i][m] = 0;
	else if (rec(m - a[i], n, i + 1, a)) dp[i][m] = 1;
	else if (rec(m, n, i + 1, a)) dp[i][m] = 1;
	else	dp[i][m] = 0;
	return (dp[i][m]);
}

int main()
{
    for (int i = 0; i < 1005; i++)
        for (int m = 0; m < 1005; m++)
            dp[i][m] = -1;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	int q;
	cin >> q;
	vector<int> m(q);
	for (int i = 0; i < q; i++) cin >> m[i];
	for (int i = 0; i < q; i++) {
		if (rec(m[i], n, 0, a))
			cout << "yes\n";
		else
			cout << "no\n";
	}

}
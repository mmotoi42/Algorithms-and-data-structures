#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

static const int N = 1000;

int lcs(string x, string y) 
{
	int c[N + 1][N + 1];
	int m = x.size();
	int n = y.size();
	int maxl = 0;
	x = ' ' + x;
	y = ' ' + y;
	for (int i = 0; i <= m; i++) c[i][0] = 0;
	for (int i = 1; i <= n; i++) c[0][i] = 0;

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (x[i] == y[j]) {
				c[i][j] = c[i - 1][j - 1] + 1;
			} else {
				c[i][j] = max(c[i - 1][j], c[i][j - 1]);
			}
			maxl = max(maxl, c[i][j]);
			cout << c[i][j] << maxl << endl;
		}
	}
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			cout << c[i][j];
			if (j != n) cout << ' ';
			if (j == n) cout << "\n";
		}
	}
	return (maxl);
}

int main()
{
	string s1, s2;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s1 >> s2;
		cout << lcs(s1, s2) << endl;
	}
}
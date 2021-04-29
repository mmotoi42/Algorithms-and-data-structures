#include <iostream>
using namespace std;

int n, a[50];

int solve (int i, int m) {
	if (m == 0) return 1;
	if (i >= n) return 0;
	int res = solve(i + 1, m) || solve(i + 1, m - a[i]);
	return res;
}

int main() {
	int q, m, i;

	cin >> n;
	for (i = 0; i < n; i++) cin >> a[i];
	cin >> q;
	for (i = 0; i < q; i++) {
		cin >> m;
		if (solve(0, m)) cout << "yes" << endl;
		else cout << "no\n";
	}
	return 0;
}

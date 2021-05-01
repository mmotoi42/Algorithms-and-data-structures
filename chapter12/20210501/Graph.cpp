#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int u, k, v;
	int g[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			g[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> u;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			g[u - 1][v - 1] = 1;
			g[v - 1][u - 1] = 1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << g[i][j];
			if (j != n - 1) cout << " ";
			if (j == n - 1) cout << endl;

		}
	}

}
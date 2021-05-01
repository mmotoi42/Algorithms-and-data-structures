#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int q;
	cin >> q;
	int m[q];
	for (int i = 0; i < q; i++) cin >> m[i];

	int sum = 0;
	for (int i = 0; i < q; i++) {
		int f = 0;
		for (int j = 0; j < (1 << n); j++) {
			sum = 0;
			for (int k = 0; k < n; k++) {
				if (j & (1 << k)) {
					sum += a[k];
					//cout << k << endl;
				}
			}
			//cout << sum << endl;
			if (sum == m[i]) f = 1;
		}
		if (f == 1) cout << "yes\n";
		else	cout << "no\n";
	}
	//cout << (1 << n) << endl;
}
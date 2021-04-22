#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n, q;
	cin >> n;
	vector<int> S(n);
	for (int i = 0; i < n; i++)
		cin >> S[i];
	cin >> q;
	vector<int> T(q);
	for (int i = 0; i < q; i++)
		cin >> T[i];
	int cnt = 0;
	for (int i = 0; i < q; i++){
		for (int j = 0; j < n; j++) {
			if (S[j] == T[i]) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
}
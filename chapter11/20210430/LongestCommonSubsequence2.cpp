#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dp[1005][1005];

int lcs(string s1, string s2) {
	int len1 = s1.size(), len2 = s2.size();
	for (int i = 0; i < len1 + 1; i++) dp[i][0] = 0;
	for (int i = 0; i < len2 + 1; i++) dp[0][i] = 0;
	s1 = ' ' + s1;
	s2 = ' ' + s2;
	int maxv = 0;
	for (int i = 1; i < len1 + 1; i++) {
		for (int j = 1; j < len2 + 1; j++) {
			if (s1[i] == s2[j]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			} else {
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
			maxv = max(maxv, dp[i][j]);
		}
	}
	return (maxv);
}

int main()
{
	int q;
	cin >> q;
	string s1[q],s2[q];
	int len[q];
	for (int i = 0; i < q; i++) {
		cin >> s1[i] >> s2[i];
		len[i] = lcs(s1[i], s2[i]);
	}
	for (int i = 0; i < q; i++) cout << len[i] << endl;
}
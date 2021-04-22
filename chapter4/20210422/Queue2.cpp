#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n,q;
	cin >> n >> q;
	typedef pair<string, int> pp;
	vector<pp> p(n);
	for (int i = 0; i < n; i++)
		cin >> p[i].first >> p[i].second;
	queue<pp> Q;
	for (int i = 0; i < n; i++)
		Q.push(p[i]);
	int sumtime = 0;
	int difftime = 0;
	pp cur;
	while (!Q.empty())
	{
		cur = Q.front();
		Q.pop();
		difftime = min(q, cur.second);
		sumtime += difftime;
		cur.second -= difftime;
		if (cur.second <= 0)
			cout << cur.first << " " << sumtime << endl;
		else
			Q.push(cur);
	}
	return (0);
}
#include <iostream>
#include <stack>
#include <vector>
#include <cstring>
using namespace std;
const int MAX = 100000;
const int NIL = -1;

int n;
vector<int> g[MAX];
int color[MAX];

void dfs(int r, int c) {
	stack<int> s;
	s.push(r);
	color[r] = c;
	while (!s.empty()) {
		int u = s.top(); s.pop();
		for (int i = 0; i < g[u].size(); i++) {
			int v = g[u][i];
			if (color[v] == NIL) {
				color[v] = c;
				s.push(v);
			}
		}
	}
}

void assignColor() {
	int id = 1;
	memset(color, NIL, sizeof(color));
	for (int u = 0; u < n; u++) {
		if (color[u] == NIL) dfs(u, id++);
	}
}

int main() {
	int s,t,m,q;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> s >> t;
		g[s].push_back(t);
		g[t].push_back(s);
	}

	assignColor();

	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> s >> t;
		if (color[s] == color[t]) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
}
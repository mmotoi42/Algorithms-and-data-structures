#include <iostream>
#include <stack>
using namespace std;

int n;
int g[1000][1000];

void getmap()
{
	for (int i = 0; i < 1000; i++)
		for (int j = 0; j < 1000; j++) 
			g[i][j] = 0;
	int u, k, v;
	for (int i = 0; i < n; i++) {
		cin >> u;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			g[u - 1][v - 1] = 1;
		}
	}
}

void dfs() 
{
	for(int i = 0; i < n; i++) {
		
	}
}

int main()
{
	cin >> n;
	getmap();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << g[i][j] << " ";
		}
		cout << endl;
	}

	dfs();
}
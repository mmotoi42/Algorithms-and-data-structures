#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n,k;
	cin >> n >> k;
	vector<int> w(n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
		sum += w[i];
	}
	int av = sum / k;
	sum = 0;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		sum += w[i];
		if (sum >= av && sum > max)
		{
			max = sum;
			sum = 0;
		}
	}
	cout << max << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> a(10);
	for(int i = 0; i < 10; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for(int i = 0; i < 3; i++)
		cout << a[i] << ' ';
}
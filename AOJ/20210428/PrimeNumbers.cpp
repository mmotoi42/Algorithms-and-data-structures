#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
		int f = 0;
		if (p[i] == 1)
			continue;
		if (p[i] == 2 || p[i] == 3)
		{
			cnt++;
			continue;
		}
        for (int j = 2; j <= p[i] / 2; j++)
        {
            if (p[i] % j == 0)
				f = 1;
        }
		if (f != 1)
			cnt++;
    }
    cout << cnt << endl;
}
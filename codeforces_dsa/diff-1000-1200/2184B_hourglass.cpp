#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int s = 0,k = 0,m = 0;
		cin >> s >> k >> m;

		int fl_th = 0;
		int up = s;
		for (int j = 0; j < m; ++j)
		{
			fl_th++;
			up--;
			if (up == 0)
			{
				j = k;
				fl_th = k;
			}
			if (fl_th == k)
			{
				up = fl_th;
				fl_th = 0;

			}
		}

		cout << up << endl;
	}
	return 0;

} 
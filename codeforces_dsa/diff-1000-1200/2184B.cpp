#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int s = 0,k = 0,m = 0;
		cin >> s >> k >> m;

		int t = 0;

		if (k < s)
		{
			int r = m % (2*k);

			if (r>=0 && r<=k-1 )
			{
				t = s-r;
			}

			else if (r>=k && r<=2*k-1)
			{
				t = 2*k - r;
			}
		}

		else
		{
			int r = m % k;
			if (r>=0 && r<=s)
			{
				t = s-r;
			}

			else
			{
				t = 0;
			}
		}

		cout << t << endl;

	}
}
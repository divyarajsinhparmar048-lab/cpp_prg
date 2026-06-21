#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long solve()
{
		int m;
		cin >> m;
		vector <int> a(m),b(m);
		long long int Sum_Max = 0;
		long long ans = 0;
		for(int i = 0 ; i< m ; i++) cin >> a[i];
		
		for(int i = 0 ; i< m ; i++) cin >> b[i];
		
		int Best_Min = 0;
		
		for(int j = 0 ; j<m ; j++)
		{
			Sum_Max += max(a[j],b[j]);
			Best_Min = max(Best_Min, min(a[j],b[j]));
		}
		
		ans = (Sum_Max + Best_Min);
		
		return ans;
}


int main()
{
	int n;
	cin >> n;
	for(int i =0 ; i<n ;i++)
	{
		cout << solve() << endl;
	}
}
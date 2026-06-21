#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ;i< n ; i++)
    {
        int m;
        cin >> m;
        
        int a[m],b[m];
        
		int max_a = 0 , max_b = 0;
		int ind_a = -1,ind_b = -1,index = -1;
		int max_val  = 0;
        
		for(int j =0 ; j<m ; j++)
        {
            cin >> a[j];
			if(max_a < a[j])
			{
				ind_a = j;
				max_a = a[j];
			}
        }
        
        
        for(int j =0 ; j<m ; j++)
        {
            cin >> b[j];
			if(max_b < b[j])
			{
				ind_b = j;
				max_b = b[j];
			}
		}
        
        if(max_a > max_b)
		{
			index = ind_a;
			max_val = max_a;
		}
		
		else if(max_b > max_a)
		{
			index = ind_b;
			max_val = max_b;
			b[index] = a[index];
			a[index] = max_val;
		}
		
		for(int d = 0 ; d < m ; d++)
		{
			if((a[d] >  b[d]) && (d != index))
			{
				int temp = a[d];
				a[d] = b[d];
				b[d] = temp;
			}
		}
		
		int sum = 0; 
		for(int o : b)
		{
			sum += o;
		}
		
		int ans = max_val + sum;
		cout << ans << endl;
    }
	return 0;
}
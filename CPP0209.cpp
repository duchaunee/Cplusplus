#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n,q;
		cin >> n >> q;
		int a[n];
		int l[q], r[q];
		for(int i = 1; i <= n; i++) cin >> a[i];
		
		for(int i = 1; i <= q; i++)
		{
			cin >> l[i] >> r[i];
		}
		
		
		for(int i = 1; i <= q; i++)
		{
			int sum = 0;
			for(int j = l[i]; j <= r[i]; j++)
			{
				sum += a[j];
			}
			cout << sum << endl;
		}
		
	
	cout << endl;	
	}
	return 0;
}

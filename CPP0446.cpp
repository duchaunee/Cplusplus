#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n;
		cin >> n;
		int a[n];
		for( int i = 0; i < n; i++ ) cin >> a[i];
		
		int res;
		int min = 1000000000;
		for( int i = 0; i < n; i++ )
		{
			for( int j = i+1; j < n; j++ )
			{
				if( abs(a[i] + a[j]) < min )
				{
					res = a[i] + a[j];
					min = abs(res);
				}
			}
		}
		
		cout << res;
		
		
	cout << endl;	
	}
	return 0;	
}



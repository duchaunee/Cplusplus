#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n,k;
		cin >> n >> k;
		int a[n];
		for( int i = 0; i < n; i++ ) cin >> a[i];
		
		
		for( int i = 0; i < n; i++ )
		{
			for( int j = i+1; j < n; j++ )
			{
				if( a[i] > a[j] ) swap( a[i], a[j] );
			}
		}
		
		cout << a[k-1] << endl;				
	}

	return 0;
}


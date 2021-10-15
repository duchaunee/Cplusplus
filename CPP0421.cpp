#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while ( t-- )
	{
		long long n;
		cin >> n;
		long long a[n], b[n];
		for( long long i = 0; i < n; i++ ) 
		{
			cin >> a[i];
			b[i] = a[i];
		}
		
//		sort( a, a+n );
		
		for( long long i = 0; i < n; i++ )
		{
//			int i = 0;
			int count = 0;
			for( long long j = 0; j < n; j++ )
			{
				if( b[j] == i )
				{
					count++;
					a[i] = i;
					
				}
			}
			if( count == 0 ) a[i] = -1;
//			i++;
		}
		
		for( long long i = 0; i < n; i++ ) cout << a[i] << " ";
	
	cout << endl;	
	}
	
	
	return 0;
}

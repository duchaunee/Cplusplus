#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- ) 
	{
		int n,m; // 3,4
		cin >> n >> m;
		int a[n], b[m];
		for( int i = 0; i < n; i++ ) cin >> a[i];
		for( int i = 0; i < m; i++ ) cin >> b[i];
		
		int z = m + n;
		int c[z];
		sort( a, a+n);

		for( int i = 0; i < z; i++ ) //7
		{
			if( i < n ) c[i] = a[i]; // i < 3
			else c[i] = b[i-n];
		}
		
		sort(c, c+z);		
		for( int i = 0; i < z; i++ ) cout << c[i] << " ";
		
	cout << endl;
	}
	
	return 0;
}

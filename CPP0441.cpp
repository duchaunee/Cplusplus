#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n,x,b;
		cin >> n >> x;
		int a[n];
		for( int i = 0; i < n; i++ ) cin >> a[i];
		
		int count = 0;
		for( int i = 0; i < n; i++ )
		{
			if( a[i] == x )
			{
				count++;
				b = i+1;
				break;
			}
		}
		if( count == 0 ) cout << -1;
		else cout << b;
				
	cout << endl;	
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n,x,c;
		cin >> n >> x;
		int a[n];
		int b[n] = {0};
		for( int i = 0; i < n; i++ ) 
		{
			cin >> a[i];
			b[a[i]]++;
		}
		
		int count = 0;
		for( int i = 0; i < n; i++ ) 
		{
			if( a[i] == x ) 
			{ 
				count++;
				c = b[a[i]];
				break;
			}
		}
		
	if( count == 0 ) cout << -1;
	else cout << c;
		
				
	cout << endl;	
	}
	return 0;
}


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
		int a[n], b[n] = {0};
		for( int i = 0; i < n; i++ ) cin >> a[i];
		
		int count = 0;
		for( int i = 0; i < n; i++ )
		{
			if( b[i] == 0 ) 
			{
				for( int j = i + 1; j < n; j++ )
				{
					if( a[i] == a[j] ) 
					{
						count++;
						b[j] = 1;
					}
				}
			}
		}
		
		if( count == 0 ) cout << -1;
		else
		{
			for( int i = 0; i < n; i++ )
			{
				if( b[i] == 1 ) 
				{
					cout << a[i];
					break;
				}
			}
		}
		
		
		
		cout << endl;
	} 
} 

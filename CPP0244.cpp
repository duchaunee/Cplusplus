#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n], b[n] = {0}, c[n];
	for( int i = 0; i < n; i++ ) cin >> a[i];
	
	sort(a,a+n);
	for( int i = 0; i < n; i++ )
	{
		if( b[i] == 0 )
		{
			for( int j = i+1; j < n; j++ )
			{
				if( a[i] == a[j] ) b[j] = 1;
			}
							
		}
	}

	for( int i = 0; i < n; i++ ) 
	{
		if( b[i] == 0 ) cout << a[i] << " ";
	}
	
  return 0;
}



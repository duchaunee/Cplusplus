#include<bits/stdc++.h>

using namespace std;

void SangSNT( int n, int check[] ) 
{
	check[0] = check[1] = 0;
	for( int i = 2; i <= n; i++ ) check[i] = 1;
	
	for( int i = 2; i <= sqrt(n); i++ )
	{
		if( check[i] == 1 )
		{
			for( int j = i*i; j <= n; j+=i )
			{
				check[j] = 0;
			}
		}		
	}	
}

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n;
		cin >> n;
		int a[n+1];
		SangSNT(n,a);
		
		int count = 0;
		for( int i = 0; i < n; i++ )
		{
			if( a[i] == 1 && a[n-i] == 1 )
			{
				count++;
				cout << i << " " << n-i;
				break;
			}
		}
		
		if( count == 0 ) cout << -1;
		
	cout << endl;	
	}
	return 0;
}

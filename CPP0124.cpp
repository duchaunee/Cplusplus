#include<bits/stdc++.h>

using namespace std;

int SNT( int n )
{
	if( n < 2 ) return 0;
	for( int i = 2; i*i < n; i++ )
	{
		if( n % i == 0 ) return 0;
	}
	
	return 1;	
}

int main()
{
	int n;
	cin >> n;
	
	int count;
	
	for( int i = 2; i <= sqrt(n); i ++ )
	{
		if( n % i == 0 )
		{
			count = 0;
			while( n % i == 0 )
			{
				count++;
				n /= i;
			}
			cout << i << " " << count << '\n';
		}		
	}
	//cout << n << " " << 1;
	if( n > 1 && SNT(n) ) cout << n << " " << 1;
	
	
	
	return 0;
}

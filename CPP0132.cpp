#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int checkSNT( long long n )
{
	if( n < 2 ) return 0;
	for( int i = 2; i <= sqrt(n); i++ )
	{
		if( n % i == 0 ) return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		long long n,a;
		cin >> n;

		for( long long i = 1; i <= sqrt(n); i++ ) 
		{
			if( n % i == 0 )
			{
				if( checkSNT(i) ) a = i;
				if( checkSNT(n/i) ) 
				{
					a = n/i;
					break;
				}
			}
		}
		cout << a << endl;		
	}
	
	return 0;
}

#include<bits/stdc++.h> 
#include<math.h>
using namespace std;


int SNT( int n )
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
		int n;
		cin >> n;
		for( int i = 2; i <= n; i++ )
		{
			if( SNT(i) && SNT(n-i) ) 
			{
				cout << i << " " << n-i;	
				break;
			}
		}
	
	
	cout << endl;
	}

	
	return 0;
}

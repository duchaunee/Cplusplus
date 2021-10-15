#include<bits/stdc++.h>

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
		long long n;
		cin >> n;
		int count = 0;
		for( int i = 2; i <= sqrt(n); i++ )
		{
			if( SNT(i) ) count++;
		}		
		cout << count;	
		cout << endl;		
	}
	
	return 0;
}


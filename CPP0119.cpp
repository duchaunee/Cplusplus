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
		
		int count= 0;
		
		for( int i = 1; i <= sqrt(n); i ++ )
		{
			if( n % i == 0 )
			{
				if( i % 2 == 0 ) count++;
				if( (n/i) % 2 == 0  ) count++;
			}
			
		}
		if( sqrt(n) == (int)sqrt(n) && (int)sqrt(n) % 2 == 0 ) cout<< count - 1;
		else cout << count;
		cout << endl;
	}

	return 0;
}


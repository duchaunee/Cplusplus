#include<bits/stdc++.h>

using namespace std;

int SNT( int n ) {
	for( int i = 2; i*i <= n; i++ )
		if( n % i == 0 ) return 0;
	return 1;	
}

int SumOfNumber( int n ) {
	int sum = 0;
	while( n != 0 ) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int SumOfdivisor( int n )
{
	int sum = 0;
	for( int i = 2; i <= sqrt(n); i++ )
	{
		if( n % i == 0 )
		{
			while( n % i == 0 ) 
			{
				sum += SumOfNumber(i);
				n /= i;
			}
		}
	}
	if( n > 1 && SNT(n) ) sum += SumOfNumber(n);
	return sum;
}

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n; cin >> n;
		if( SNT(n) == 0 && SumOfdivisor(n) == SumOfNumber(n) )
		cout << "YES";
		else cout << "NO";

//		cout << SumOfdivisor(n);
		
	cout << endl;		
	}
	
	return 0;
}



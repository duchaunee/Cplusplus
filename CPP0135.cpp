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


void baUocSo( int n )
{
	for( int i = 2; i <= sqrt(n); i++ )
	{
		if( SNT(i) ) cout << i*i << " ";	
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
		baUocSo(n);				
		cout << endl;		
	}
	
	return 0;
}

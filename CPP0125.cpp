#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int checkSNT( int n )
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
	int a,b;
	cin >> a >> b;
	if( a > b ) 
	{
		int temp = a;
		a = b;
		b = temp;
	}
	
	for( int i = a + 1; i < b; i++ )
	{
		if( checkSNT(i) ) cout << i << " ";
	}

	return 0;
}

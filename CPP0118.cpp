#include<bits/stdc++.h>

using namespace std;

int snt( int n )
{
	for( int i = 2; i <= sqrt(n); i++ )
		if( n % i == 0 ) return 0;
	return 1;	
}

int check( int n )
{
	int count;
	int checkCount = 0;
	for( int i = 2; i <= sqrt(n); i++ ) 
	{
		if( n % i == 0 )
		{
			checkCount++;
			count = 0;
			while( n % i == 0 )
			{
				count++;
				n /= i;
			}
		}	
		if( count != 1 ) return 0;
	}	
	if( n > 1 && snt(n) ) checkCount++;
	if(checkCount == 3 ) return 1;
	else return 0; 
}
int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n;
		cin >> n;
		if( check(n) ) cout << 1;
		else cout << 0;
		cout << endl;	
	}
			
	return 0;
}

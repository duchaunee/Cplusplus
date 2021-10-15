#include<bits/stdc++.h>
#include<math.h>

using namespace std;


int check( long long n ) // 5654
{
	int donvi = n % 10; //4
	n /= 10; //565
	
	while( n != 0 )
	{
		int donvi2 = n % 10; //5
		if( abs(donvi2 - donvi) != 1 ) return 0;
		donvi = donvi2; //2
		n /= 10;	//
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
		
		if( check(n) ) cout << "YES\n";
		else cout << "NO\n";
	
	}

	return 0;
}

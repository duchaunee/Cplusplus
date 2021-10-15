#include<bits/stdc++.h>

using namespace std;


int ThuanNghich( long long n ) //12345
{
	long long m = n;
	long long donvi = n % 10;
	n /= 10;
	while( n != 0 )
	{
		long long donvi2 = n % 10;
		donvi = donvi*10 + donvi2;
		n /= 10;	
	}
	if( donvi == m ) return 1;
	else return 0;	
}

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		long long n;
		cin >> n;
		if( ThuanNghich(n) ) cout << "YES";
		else cout << "NO";
		
	cout << endl;	
	}
	
	
	return 0;
}

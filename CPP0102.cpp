#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		char n;
		cin >> n;
		if( n >= 'A' && n <= 'Z' ) n += 32;
		else if( n >= 'a' && n <= 'z' ) n-= 32;

		cout << n << endl;	
	}
	
	return 0;
}

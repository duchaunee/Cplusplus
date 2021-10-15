#include<bits/stdc++.h>

using namespace std;

int main (){
	int t;
	cin >> t;

	while( t-- )
	{	
		int n;
		cin >> n;
		int count = 0;
		
		while( n != 0 ) 
		{
			int donvi = n % 10;
			n = n/10;
			if( donvi != 6 && donvi != 0 && donvi != 8)
			count++;
		}
		
		if( count > 0 ) cout << "NO";
		else cout << "YES";
		
	cout << endl;	
	}
	
	return 0;
}

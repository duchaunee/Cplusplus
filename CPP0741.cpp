#include<iostream> 
using namespace std; 

int main() 
{ 
	int t ; 
	cin >> t; 
	while( t-- ) 
	{ 
		int x, y, p; 
		cin >> x >> y >> p; 
		int a = x % p; 
		long long m = 1; 
		y %= p - 1; 
		for( int i = 1; i <= y; i++ ) 
		{ 
			m = (m*a) % p; 
		} 
		cout << m << endl; 
	} 
	return 0;
}

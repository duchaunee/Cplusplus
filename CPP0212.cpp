#include <iostream> 
#include <cmath> 

using namespace std; 
#define modulo 1000000007 

int main() 
{ 
	int t; cin >> t; 
	while( t-- ) 
	{ 
		long long n, x; cin >> n >> x; 
		long long a[2000]; 
		for (int i = 0; i < n; ++i) cin >> a[i];
		
		long long b = 0; 
		for (int i = 0; i < n; ++i) 
		{ 
			long long s = 1; 
			for (int j = n - i - 1; j > 0; --j) { 
				s = (s * x) % modulo; 
			} 
			b += a[i] * s; 
			if (b > modulo) b %= modulo; 
		} 
		cout << b << endl; 
	} 
	return 0; 
}

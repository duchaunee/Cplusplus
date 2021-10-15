#include<iostream>
#include<math.h> 

using namespace std;

int mountain( int a[], int n, int l, int r ) {
	int max = -999999;
	int b;
	for( int i = l; i <= r; i++ ) {
		if( a[i] >= max ) {
			max = a[i];
			b = i;
		}	
	}
	
	
	for( int i = l; i < b; i++ ) {
		if( a[i+1] < a[i] ) return 0;
	}
	
	for( int i = b; i < r; i++ ) {
		if( a[i+1] > a[i] ) return 0;
	}	
	return 1;
	
}

int main ()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n; cin >> n;
		int a[n];
		for( int i = 0; i < n; i++ ) cin >> a[i];
		int l,r; cin >> l >> r;
		
		if( mountain(a,n,l,r) ) cout << "Yes";
		else cout << "No";
		
	cout << endl;
	}	 
}


#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n;
		cin >> n;
		int a[n], b[n] = {0};
		
		for( int i = 0; i < n; i++ ) cin >> a[i];
		
		sort(a, a+n);		
		int max = a[n-1];
		int min = a[0];
		
		for( int i = 1; i < n; i++ ) {
			if( a[i] == a[i-1] ) b[i] = 1;
		}

		int count = 0;
		for( int i = 0; i < n; i++ ) {
			if( b[i] == 0 ) count++;	
		}
		cout << max - min - count + 1;
		
	
	cout << endl;	
	}
	return 0;
}

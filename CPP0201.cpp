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
		int a[n];
		for( int i = 0; i < n; i++ ) cin >> a[i];
		
		sort(a, a+n);
		int min = 10000000000;
		
		for( int i = 1; i < n; i++ )
		{
			if( a[i] - a[i-1] < min )
				min =  a[i] - a[i-1];
			//if( min == 1 ) break;	
		}
		
		cout << min;
	
	cout << endl;		
	}
	
	return 0;
}


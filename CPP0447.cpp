#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n,k,c;
		cin >> n >> k;
		int a[n];
		
		for( int i = 0; i < n; i++ ) cin >> a[i];
		
		sort(a,a+n);
		
		int count = 0;
		for( int i = n-1; i >= n-k; i-- ) 
		{
			cout << a[i] << " ";
		}
			
	cout << endl;	
	}
	return 0;
}


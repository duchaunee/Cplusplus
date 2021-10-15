#include<bits/stdc++.h>

using namespace std;


long long fib( long long a[], int n )
{
	a[1] = 1;
	a[2] = 1;
	for( int i = 3; i <= n; i++ )
	{
		a[i] = a[i-1] + a[i-2];	
	}
	return a[n];
}

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n;
		cin >> n;
		long long a[92];
		cout << fib(a,n);
	
	cout << endl;	
	}
	
	
	return 0;
}

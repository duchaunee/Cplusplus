#include<bits/stdc++.h> 

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		long long n,k;		
		cin >> n >> k;
		
		int sum = 0;
		for( long long i = 1; i <= n; i++ )
		{
			sum += i % k;	
		}
		cout << sum;
	
	cout << endl;
	}

	
	return 0;
}

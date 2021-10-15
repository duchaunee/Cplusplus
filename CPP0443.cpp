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
		
		int check = 0;
		for( int i = 0; i < n-1; i++ ) 
		{
			cin >> a[i];
			if( a[i] == 1 ) check = 1;
		}
		
		sort(a, a+n-1);	 
		
		
		for( int i = 1; i < n-1; i++ )	
		{
			if( check == 0 )
			{
				cout << 1;
				break;
			}
			else
			{
				if( a[i] != (a[i-1] + 1) ) 
				{
					cout << a[i-1] + 1;
					break;
				}
			}
			
		}
	
		cout << endl;
			
	}
	
	return 0;
}


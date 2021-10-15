#include<bits/stdc++.h>

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
		
		int count = 0;
		for( int i = 0; i < n; i++ )
		{
			if( b[i] == 0 )
			{
				for( int j = i+1; j < n; j++ )
				{
					if( a[i] == a[j] ) 
					{
						b[i] = 1;
						b[j] = 1;
					}
				}
								
			}

		}
		for( int i = 0; i < n; i++ )
		{
			if( b[i] == 1 ) count++;
		}
		
		cout << count;
		
	cout<<endl;
	}

  return 0;
}

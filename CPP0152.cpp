#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int a,m;
		cin >> a >> m;
		int count = 0;
		for( int i = 0; i < m; i++ )
		{
			if( (a*i) % m == 1 ) 
			{
				count++;
				cout << i;
				break;
			}	
		}
		
		if( count == 0 ) cout << "-1";
		
	cout << endl;
	}
	
	
	return 0;
	
}

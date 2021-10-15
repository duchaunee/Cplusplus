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
		int a[n], b[n];
		
		for( int i = 0; i < n; i++ ) cin >> a[i]; // nhap mang a
		
		int count = 1;	
			
		while(1) 
		{
			int check = 0;
			for( int i = 0; i < n; i++ )
			{
				if( a[i] == count ) check++; 	
			}
			
			if( check > 0 ) count++;
			else break;
		}
		
		cout << count << endl;
			
	}
	
	return 0;
}

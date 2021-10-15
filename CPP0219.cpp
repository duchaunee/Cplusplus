#include<bits/stdc++.h>

using namespace std;

void input( int n, int m, int a[105][105] ) {
	for( int i = 0; i < n; i++ ) {
		for( int j = 0; j < m; j++ ) {
			cin >> a[i][j];
		}
	}	
}

void solve( int n, int m, int a[105][105], int b[105][105] ) {
	b[105][105] = {0};
	for( int i = 0; i < n; i++ ) 
	{
		for( int j = 0; j < m; j++ ) 
		{
			if( a[i][j] == 1 )
			{
				b[i][j] = 1;
				for( int y = 0; y < m; y++ ) b[i][y] = 1;
				for( int x = 0; x < n; x++ ) b[x][j] = 1;
			}
		}
	}
}

int main()
{	
	int t;
	cin >> t;
	while( t-- )
	{
		int n,m;
		cin >> n >> m;
		int a[105][105];
		input(n,m,a);
		int b[105][105];
		solve(n,m,a,b);
		
		for( int i = 0; i < n; i++ ) 
		{
			for( int j = 0; j < m; j++ ) {
				cout << b[i][j] << " ";
			}
		cout << endl;	
		}
	}
	
	
    cout << endl; 
    
return 0;
}
 



#include<bits/stdc++.h>

using namespace std;

void input( int n, int a[][3] ) {
	for( int i = 0; i < n; i++ ) {
		for( int j = 0; j < 3; j++ ) {
			cin >> a[i][j];
		}
	}	
}

void solve( int n, int a[][3] ) {
	int check = 0;
	while( n-- )
	{
		int countNumber1 = 0;
		for( int i = 0; i < 3; i++ ) 
		{
			if( a[n][i] == 1 ) countNumber1++; 
		}
		if( countNumber1 > 1 ) check++;
	}
	cout << check;	
}

int main()
{
	int n; 
	cin >> n;
	int a[n][3];
	input(n,a);
	solve(n,a);
	
    cout << endl; 
    
return 0;
}
 


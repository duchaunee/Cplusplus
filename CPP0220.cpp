#include<bits/stdc++.h>

using namespace std;

void nhap(int a[100][100],int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

void xuat(int a[100][100],int n)
{
	for( int i = 0; i < n; i++ )
	{
		for( int j = 0; j < n; j++ )
		{
			if( i != 0 && i != n - 1 && j != 0 && j != n - 1 ) cout << " ";
			else cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n,a[100][100];
		cin >> n;
		nhap(a,n);
		xuat(a,n);
		
	cout << endl;	
	}
	return 0;
}

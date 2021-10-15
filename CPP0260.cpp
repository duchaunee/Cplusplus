#include <bits/stdc++.h>

using namespace std;

vector<int> vec;

void input(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 	
        {
            cin >> a[i][j];
            vec.push_back( a[i][j] );
        }	
	}
    sort( vec.begin(), vec.end());
}

void solve(int a[][100], int n)
{	
    int hang = n - 1, cot = n - 1, d = 0, x = 0;
    while( x <= n/2 )
    {
        for( int i = x; i <= cot; i++) a[x][i] = vec[d++];
		for( int i = x+1; i <= hang; i++) a[i][cot] = vec[d++];
		for( int i = cot-1; i >= x; i--) a[hang][i] = vec[d++];
		for( int i = hang-1; i > x; i--) a[i][x] = vec[d++];
		hang--, cot--;
		x++;
    }
    
    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
        {
            cout << a[i][j] << " ";
        }
        cout << endl;	
	}
}

int main()
{
    int n;
    cin >> n;
    int a[100][100];
    input(a, n);
    solve(a, n);

    return 0;
}
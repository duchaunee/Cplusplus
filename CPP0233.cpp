#include <bits/stdc++.h>

using namespace std;

vector<int> vec;

void input(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}		
	}      
}

void solve(int a[][100], int n, int m)
{	
    int hang = n - 1, cot = m - 1, x = 0; // hang = 2, cot = 3
    while( vec.size() < m * n )
    {
        for( int i = x; i <= cot; i++) vec.push_back(a[x][i]);
		for( int i = x+1; i <= hang; i++) vec.push_back(a[i][cot]);
		for( int i = cot-1; i >= x; i--) vec.push_back(a[hang][i]);
		for( int i = hang-1; i > x; i--) vec.push_back(a[i][x]);
		hang--, cot--;
		x++;
    }
	for (int i = m*n - 1; i >= 0; i--) cout << vec[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[100][100];
        input(a, n, m);
        solve(a, n, m);
        vec.clear();
    }
    return 0;
}
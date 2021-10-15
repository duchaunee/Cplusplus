#include<bits/stdc++.h>

using namespace std;

int a[10000];

void solve( int n )
{
	int count = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++)
	{
        while(n % i == 0)
		{
            n /= i;
            a[count++] = i;
            break;
        }
    }
    if ( n > 1 ) a[count++] = n;
	cout << a[0];
}

int main()
{
	int t; 
    cin >> t;
    while(t--)
	{
		int n; cin >> n;
        cout << 1 << " ";
        for( int i = 2; i <= n; i++ )
        {   	
			solve(i);
			cout << " ";
		}
    cout << endl; 
    }
    return 0;
}
 

#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve( ll a[],ll b[],int n ) {
	b[0] = a[0];
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if( a[j] > a[i] ) 
			{
				b[j] = b[i] + a[j];
			}		
		}
	}
}


int max(ll a[],int n){
	int k = a[0];
	for (int i = 1; i < n; i++)
		if (k < a[i] ) k = a[i];
	return k;
}

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n; cin >> n;
		ll a[1000];
		ll b[1000] = {0};
		for(int i = 0;i < n; i++) cin >> a[i];
		solve(a,b,n);
		cout << max(b,n) << endl;
	}
	return 0;
}

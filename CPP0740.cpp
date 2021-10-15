#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n;
		long long s;
		cin >> n;
		int a[n] = {0};
		long long max = 0;
		for( int i = 0; i < n; i++ ) cin >> a[i];
            
		max = a[0];
		for(int i = 0; i < n; i++){
			if(i == n-1) {
				if( max < a[i]) max = a[i];
				break;
			}
			s = a[i];
			for(int j = i+1; j < n; j++){
				s *= a[j];
				if( max < s) max = s;
			}
		}
		cout << max << endl;
	}
	return 0;
}


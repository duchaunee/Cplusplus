#include<bits/stdc++.h>
using namespace std;

int a[100000];


int solve(int a[],int n){
	int max = -99999999;
	for( int i = 0; i < n-1; i++) {
		for( int j = i+1 ; j < n; j++) {
			if( a[j]- a[i] > max) max = a[j]-a[i];
		}
	}
	if( max > 0 ) return max;
	return -1;
}

int main()
{
	int t;
	cin >> t;
	while( t-- ){
		int n;
		cin >> n;
		for( int i = 0; i < n; i++)  cin >> a[i];
		cout << solve(a,n) <<endl;
	}
	return 0;
}

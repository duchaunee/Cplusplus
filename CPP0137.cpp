#include<bits/stdc++.h>

using namespace std;

bool SNT( int n ) {
	if( n < 2 ) return 0;
	for( int i = 2; i <= sqrt(n); i++ )
		if( n % i == 0) return 0;
	return 1;
}

int main(){
	int t;
	cin >> t;
	while( t-- )
	{
		long long l,r;
		cin >> l >> r;
		long long count = 0;
		for( int i = l; i <= sqrt(r); i++ )
		{
			if( SNT(i) ) count++;
		}
		cout<< count <<endl;
	}
	return 0;
}

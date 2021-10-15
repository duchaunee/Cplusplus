#include<bits/stdc++.h>
using namespace std;

bool checkFibo( int n ){
	int f0=0,f1=1,fn;
	while(f0+f1<=n){
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	if(fn==n || n==0) return true;
	return false;
}


int main(){
	int t;
	cin >> t;
	while( t-- ){
		int a[101];
		int n; cin >> n;
		for( int i = 0; i < n; i++ ) cin >> a[i];
		
		for( int i = 0; i < n; i++ )
		{
			if( checkFibo(a[i]) ) cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

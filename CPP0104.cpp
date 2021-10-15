#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long S = 1;
	long long temp = 0;
	int n;
	cin >> n;
	for( int i = 1; i <= n; i++ )
	{
		S = S*i;
		temp += S;
	}
	
	cout << temp;
	
	return 0;	
}

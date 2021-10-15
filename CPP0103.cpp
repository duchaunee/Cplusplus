#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double S = 0;
	for( int i = 1; i <= n; i++ )
	{
		S += (double)1/i;
	}
	
	printf("%.4lf",S);
	return 0;
}

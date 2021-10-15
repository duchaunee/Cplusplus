#include<bits/stdc++.h>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		double a,b,c,d;
		cin >> a >> b >> c >> d;
		double kc;
		kc = sqrt( (c - a)*(c - a) + (d - b)*(d - b) );
		printf("%.4lf", kc);
		
	printf("\n");
		
	}
	
	return 0;	
}

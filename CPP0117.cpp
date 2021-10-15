#include<bits/stdc++.h>

using namespace std;

int sumOfNum( int n )
{
	int sum = 0;
	while ( n != 0 )
	{
		sum += n % 10;
		n /= 10;
	}
	
	return sum;
}



int main() 
{
	
	int t;
	cin >> t;
	while ( t-- )
	{
		int n;
		cin >> n;
		while( n >= 10 )
		{
			n = sumOfNum(n);	
		}
		
		cout << n;
	
	cout << endl;
	}
	
	return 0;
}

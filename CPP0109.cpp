#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int check( int n )
{
	int demchan = 0, demle = 0;
	while( n != 0 )
	{
		int donvi = n % 10;
		if( donvi % 2 == 0 ) demchan++;
		else demle++;
		n /= 10;
	}
	if( demchan == demle ) return 1;
	else return 0;	
}

int main()
{
	int n;
	cin >> n;
	int count = 0;
	for( int i = pow(10,n-1); i < pow(10,n); i++ )
	{
		if( check(i) ) 
		{
			count++;
			cout << i << " ";
		}
		if( count == 10 ) 
		{
			cout << endl;
			count = 0;
		}
	}

	return 0;
}

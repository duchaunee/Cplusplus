#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		string str;
		cin >> str;
		int size = str.length();
		int sumchan = 0, sumle = 0;
		
		for( int i = 0; i < size; i++ )
		{
			if( i % 2 == 0 ) sumle += (str[i] - '0');
			else sumchan += (str[i] - '0');
		}
		
		int hieu = abs(sumle - sumchan);
		if( hieu % 11 == 0 ) cout << 1;
		else cout << 0;
		
		
			
	cout << endl;	
	}
	return 0;
}


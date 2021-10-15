#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

const char D101[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
const char D102[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n;
		char s;			
		cin >> n;
		int size = 15, count = 0, d = 0;
		
		if( n % 2 == 1 ) 
		{
			while( size-- )
			{
				cin >> s;
				if( s == D101[d] ) count++;
				d++;
			}	
		}
		
		if( n % 2 == 0 ) 
		{
			while( size-- )
			{
				cin >> s;
				if( s == D102[d] ) count++;
				d++;
			}	
		}
		printf("%.2lf",(double)(count*10)/15 );
		
	cout << endl;	
	}
	return 0;	
}



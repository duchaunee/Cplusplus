#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; 
	cin >> t;
	cin.ignore();
	while( t-- )
	{
		string str;
		int check[100000] = {0};
		getline(cin,str);
		int size = str.size();
		for( int i = 0; i < size; i++ )
		{
			if( check[i] == 0 )
			{
				for( int j = i+1; j < size; j++ )
				{
					if( str[i] == str[j] ) 
					{
						check[i] = 1;
						check[j] = 1;
					}
				}
			}
		}
		
		for( int i = 0; i < size; i++ )
		{
			if( check[i] == 0 ) cout << str[i];
		}
		
	
	cout << endl; 	
	}
 
	return 0;
}
 


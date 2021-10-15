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
		getline(cin,str);
		int res = str.length();
		
		int count = 0;
		for( int i = 0; i < res; i++ )
		{
			for( int j = i + 1; j < res; j++ )
			{
				if( str[i] == str[j] ) count++;
			}
		}
		
		cout << count + res;
	
	cout << endl;		
	}
	
	return 0;
}

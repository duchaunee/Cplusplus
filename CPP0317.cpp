#include<bits/stdc++.h>

using namespace std;

int chuSoChan( string str )
{
	int res = str.size();
	int i = 0;
	while( res-- )
	{
		if( str[i] % 2 != 0 ) return 0;
		i++;
	}
	return 1;
}

int thuanNghich( string str )
{
	int res = str.size();
	for( int i = 0; i < res/2; i++ )
	{
		if( str[i] != str[res-i-1] ) return 0;
	}
	return 1;
}



int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while( t-- )
	{
		string str;
		getline(cin,str);
		if( thuanNghich(str) && chuSoChan(str) ) cout << "YES";	
		else cout << "NO";
		
	cout<<endl;
	}

  return 0;
}

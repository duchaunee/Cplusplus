#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t; 
	cin>>t;
	
	while( t-- )
	{
		int n; 
		cin >> n;
		cin.ignore();
		string s;
		int check[10];
		getline(cin,s);
		
		check[0] = 0;
		
		for(int i = 1 ; i < 10 ; i++) check[i] = check[i-1] + 1;

		for(int i = 0 ; i < s.length() ; i++)
		{
			for(int j = 0 ; j < 10 ; j++)
			{
				if( s[i] - '0' == check[j] ) check[j] += 100;
			}
		}
		
		for( int i = 0 ; i < 10 ; i++)
		{
			if( check[i] > 10 ) cout << i << " ";
		}
		
//		for( int i = 0 ; i < 10 ; i++)
//		{
//			cout << check[i] << " ";
//		}	
		
//		for( int i = 0 ; i < s.length() ; i++)
//		{
//			cout << s[i] << " ";
//		}			

		cout << endl; 
	}
	return 0;
}

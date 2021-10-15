#include<bits/stdc++.h> 

using namespace std; 

int main()
{ 
	int t; cin >> t; 
	while( t-- )
	{ 
		string str; 
		long long b, result = 0; 
		cin >> str >> b; 
		for(int i = 0; i < str.size();i++)
		{ 
			result = ( result*10 + (str[i] - '0')) % b; 
		} 
		
	cout << result << endl; 
	} 
}

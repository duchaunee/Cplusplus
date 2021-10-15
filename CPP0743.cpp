#include<bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	cin.ignore();
	while( t-- )
	{
		string str;
		getline(cin,str);
		vector <string> vec;
		stringstream ss (str);
		string token;
		while( ss>>token )
		{
			vec.push_back(token);
		}
		for( int i = vec.size() - 1; i >= 0; i-- ) 
			cout << vec[i] << " ";
	cout << endl;		
	}
	
	return 0;
}

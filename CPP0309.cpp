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
		string token;
		getline(cin,str);
		
		stringstream ss (str); // cat chuoi
		
		vector <string> temp; // tao 1 vecto de luu cac chuoi da cat
	
		while( ss >> token ) // vong while de luu cac chuoi da cat
							// vao vector
		{
			temp.push_back(token);
		}
		
	cout << temp.size();
	
	cout << endl;		
	}
	
	return 0;
}

#include<bits/stdc++.h>

using namespace std;
 
int ghepChuoi(string X, string Y)
{
    string XY = X.append(Y);

    string YX = Y.append(X);

    if(XY.compare(YX) > 0) return 1;
    else return 0;
}
 
int main() 
{
	int t;
    int n;
    vector <string> vec;
    string str;
	cin >> t;

	while( t-- )
	{
        cin >> n; 
        vec.clear();   
        while ( n-- ) 
        {
            cin >> str;
            vec.push_back(str);
        }

        sort(vec.begin(),vec.end(),ghepChuoi);
        for( int i = 0; i < vec.size(); i++ ) cout << vec[i];

	cout << endl;	
	}
    
}
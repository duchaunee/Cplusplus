#include<bits/stdc++.h>

using namespace std;

int yesNo( int b[100] ) {

	int check1 = 0;
	for( int i = 1; i < 10; i++ )
	{
		if( b[i] == 0 ) return 0;
	}
	return 1;
}

int main() {
    int t; cin >> t;
    cin.ignore();
    while( t-- ) 
    {   
        string str;
        getline(cin,str);

        int b[100] = {0};
        int check = 0;
		if( str[0] - '0' == 0 ) cout << "INVALID";
		else
		{
			for( int i = 0; i < str.size(); i++ )
			{
				if( b[str[i] - '0'] == 0 )
				{
					if( str[i] - '0' >= 0 &&  str[i] - '0' <= 9 )
					{
						b[str[i] - '0'] = 1;
						
					}
					else 
					{
						check++;
						cout << "INVALID";		
						break;
					}
				}     
			}

			if( yesNo(b) && check == 0 ) cout << "YES";
			if( yesNo(b) == 0 && check == 0 ) cout << "NO";
		}	


    cout << endl;
    }

    return 0;
}
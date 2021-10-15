#include<bits/stdc++.h>

using namespace std;

long long sum(  long long a )
{
    long long sum = 0;
    while( a != 0 )
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
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

        long long result = 0;
        for( int i = 0; i < str.size(); i++ )
        {
            result += str[i] - '0';
        }

        while( result >= 10 )
        {
            result = sum(result);
        }

        if( result == 9 ) cout << 1;
        else cout << 0;

        
    cout << endl;    
	}
	return 0;
}

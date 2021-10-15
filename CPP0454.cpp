#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int t; cin >> t;
	while( t-- )
	{
		int n; cin >> n;
        ll a[n];
        for( int i = 0; i < n; i++ ) 
        {
            cin >> a[i];
            a[i] = a[i]*a[i];
        }
        sort(a,a+n);
        ll sum;
        vector <ll> s;
        for( int i = 0; i < n-1; i++ )
        {
            sum = 0;
            for( int j = i+1; j < n-1; j++ )
            {
                if( a[i] != 0 && a[j] != 0 )
                {
                    sum = a[i] + a[j];
                    s.push_back(sum); 
                }
            }
        }

        bool check = false;
        for( int i = 0; i < n; i++ ) 
        {
            for( auto &it : s )
            {
                if( a[i] == it )
                {
                    check = true;
                    break;
                }   
            }
        }

        if( check ) cout << "YES";
        else cout << "NO";
    cout << endl;    

	}
	
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
        int n, m;
        set <int> s;
        set <int> s1;
        cin >> n >> m;
        int a[n], b[m];
  
        for( int i = 0; i < n; i++ ) 
        {
            cin >> a[i];
            s.insert(a[i]);
            s1.insert(a[i]);
        }
        for( int i = 0; i < m; i++ ) 
        {
            cin >> b[i];
            s.insert(b[i]);
        }

        for( auto it = s.begin(); it != s.end(); it++ )  cout << *it << " ";


        cout << endl;

        size_t res;

        for( int i = 0; i < m; i++ )
        {
            if( s1.find(b[i] ) != s1.end() ) cout << b[i] << " ";
        }
        
    cout << endl;    
	}
	return 0;
}

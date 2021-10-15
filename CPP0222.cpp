#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int t; cin >> t;
    while( t-- )
    {
        int n; cin >> n;
        int a[100][100];

        multiset <int> mul;

        set <int> s;
        for( int i = 0; i < n; i++ )
        {
            for( int j = 0; j < n; j++ )
            {
                cin >> a[i][j];
                s.insert(a[i][j]);
            }
            for(int i:s) mul.insert(i);
            s.clear();
        }
        
        vector <int> v;
        for( int i:mul ) v.push_back(i);

        // for( int i = 0; i < v.size(); i++ )
        // {
        //     cout << v[i] << " ";
        // }

        int res = 0;
        int b[100] = {0};

        int count = 1;
        for( int i = 0; i < v.size(); i++ )
        {
            if( v[i] == v[i+1] ) count++;

            if( v[i] != v[i+1] ) 
            {
                if( count == n ) 
                {
                    res++;
                    count = 1;
                }
                else count = 1;
            }
            
            //else count = 1;
            //cout << v[i] << " ";
        }

        cout << res << endl;

    }
    
}
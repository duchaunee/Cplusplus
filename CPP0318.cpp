#include <bits/stdc++.h> 

using namespace std;  

int case1( int a[] )
{
    for( int i = 0; i < 4; i++ )
    {
        if( a[i] >= a[i+1] ) return 0;
    } 
    return 1;
}

int case2( int a[] ) 
{
    for( int i = 0; i < 4; i++ )
    {
        if( a[i] != a[i+1] ) return 0;
    }
    return 1;
}

int case3( int a[] )
{
    for( int i = 0; i < 2; i++ )
    {
        if( a[i] != a[i+1] ) return 0;
    }

    for( int i = 3; i < 4; i++ )
    {
        if( a[i] != a[i+1] ) return 0;
    }

    return 1;
}

int case4( int a[] )
{
    for( int i = 0; i < 5; i++ )
    {
        if( a[i] != 6 && a[i] != 8 ) return 0;
    }
    return 1;
}



int main() 
{ 
    int t; cin >> t; 
    cin.ignore();
    while( t -- ) 
    { 
        string s;
        getline(cin,s);
        int a[100];

        //cout << s.size();
        // for( int i = 0; i < s.size(); i++ )
        // {
        //     cout << s[i] << " ";
        // }
        int x = 0;
        for( int i = s.size() - 6; i < s.size(); i++ )
        {
            if( isdigit(s[i]) ) 
            {
                a[x] = s[i] - '0';
                x++;
            }
        }

        
        
        //if( case1(a) ) cout << 'YES';

        if( case1(a) || case2(a) || case3(a) || case4(a) ) cout << "YES";
        else cout << "NO";

    cout << endl;
    }
    return 0; 
}

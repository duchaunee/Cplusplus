#include <bits/stdc++.h> 

using namespace std;  

int main() 
{ 
    int t; cin >> t; 
    cin.ignore();
    while( t -- ) 
    { 
        string s; cin >> s;
        int res = -1;
        bool check = false;
        for( int i = 0; i < s.length() - 1; i++ ) 
        {
            if( s[i] > s[i+1] ) 
            {
               res = i;
               check = true;
               
            }
        }

        int max = -1;
        int temp;
        for( int i = res+1; i < s.length(); i++ )
        {
            if( s[i] < s[res] && s[i] > max )
            {
               max = s[i];
               temp = i;
            }
        }

        if( !check ) cout << -1;
        else 
        {
            swap( s[res], s[temp] );
            cout << s;
        }
       
    cout << endl;    
    } 
    
    return 0; 
}

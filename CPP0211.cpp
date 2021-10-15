#include<bits/stdc++.h> 

using namespace std; 

int main()
{ 
    int t; cin >> t;
    while( t-- )
    {
        int n; cin >> n;
        int a[n];
        for( int i = 0; i < n; i++ ) cin >> a[i];
        
        int max = 0;
        for( int i = 0; i < n; i++ )
        {
            for( int j = n-1; j > i + max; j-- )
            {
                if( a[i] < a[j] && j - i > max ) 
                {
                    max = j-i; 
                    break;
                }
            }
        }
   
        cout << max << endl;
    }
        
    return 0; 
}
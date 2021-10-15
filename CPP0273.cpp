#include<bits/stdc++.h> 

using namespace std; 

int main()
{ 
    int t; cin >> t; 
    while( t-- )
    { 
        int n; cin >> n;
        int a[n];
        
        int sumOfMang = 0;
        for( int i = 0; i < n; i++ ) 
        {
            cin >> a[i];
            sumOfMang += a[i];
        }

        int sum = 0;
        bool check = false;

        for( int i = 1; i < n-1; i++ )
        {
            sum += a[i-1]; 
            int res = sumOfMang - a[i];
            if( res % 2 == 0 )
            {
                if( res/2 == sum )
                {
                    cout << i+1;
                    check = true;
                    break;
                }     
            }    
        }

        if( check == false ) cout << -1;
        cout << endl;

    } 
    return 0; 
}
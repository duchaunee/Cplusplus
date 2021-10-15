#include <bits/stdc++.h> 

using namespace std; 


int main() 
{ 
    int t; cin >> t; 
    while (t --) 
    { 
        int n; cin >> n;
        int a[n];
        long long max = -999;
        long long maxsum = -999;
        long long sum = 0;

        for( int i = 0; i < n; i++ ) 
        {
            cin >> a[i];
            if( a[i] > max ) max = a[i];

            sum += a[i];
            if(sum < 0) sum = 0;
            if( sum > maxsum ) maxsum = sum;
        }

        if( max <= 0 ) cout << max;
        else cout << maxsum;

        
    cout << endl;    
    } 
    
    return 0; 
}
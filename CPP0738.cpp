#include<bits/stdc++.h> 

using namespace std; 

int main() { 
    int t; cin >> t; 
    while( t-- ) 
    { 
        int n; cin >> n; 
        int a[n]; 
        for(int i = 0; i < n; i++ ) cin >> a[i]; 

        int count = 0; int temp = 0; 
        for(int i = 0 ; i < n ; i++ )
        { 
            int res = 0;  
            while( a[i] > 0 ) 
            { 
                if( a[i] % 2 == 0)
                { 
                    a[i] /= 2; 
                    res++; 
                } 
                
                if(a[i] % 2 == 1)
                { 
                    a[i] -= 1; 
                    count++; 
                } 
            } 
            temp = max(temp,res); 
        } 
        
        cout << temp + count << endl; 
    } 
    return 0;
}
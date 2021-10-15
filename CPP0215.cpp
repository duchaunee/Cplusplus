#include<bits/stdc++.h> 

using namespace std; 


void nhap(int a[], int m) { 
    for(int i = 0; i < m; i++) cin >> a[i]; 
}


int solve(int a[], int b[], int m, int n) { 
    int sum = 0; 
    int x = 0;
    for(int i = 0; i < m; i++) 
    { 
        x += a[i]; 
        int y = 0; 

        for(int j = i + 1; j < n; j++) y += b[j];
        
        if( x + y > sum ) sum = x + y; 
    } 
    
    return sum; 
} 

 

int main() { 
    int t; cin >> t; 
    while( t-- ) 
    { 
        int m, n; cin >> m >> n; 
        int a[1000]; 
        int b[1000]; 
        nhap(a, m); 
        nhap(b, n); 

        int max = solve(a, b, m, n); 
        int max1 = solve(b, a, n, m); 
        if( max < max1 ) max = max1; 
        
        cout << max << endl; 
    } 
    return 0;
}
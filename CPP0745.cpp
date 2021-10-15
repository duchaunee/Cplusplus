#include <bits/stdc++.h> 

using namespace std; 

const long r = pow(10,9) + 7; 

int main() 
{ 
    int t; cin >> t; 
    while (t --) 
    { 
         
        long n; cin >> n;
        long f[1001];  
        f[0] = 0; 
        f[1] = 1; 
        for (long i = 2; i <= n; i++) f[i] = f[i-1] % r + f[i-2] % r; 
        cout << f[n] % r << endl; 
    } 
    
    return 0; 
}
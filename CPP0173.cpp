#include<bits/stdc++.h>

using namespace std;

long long BCNN( int a, int b, long long c ) {
    long long res = (a*b)/__gcd(a,b);
    return (res*c)/__gcd(res,c);
}

int main() {
    int t; cin >> t;
    while( t-- ) 
    {
        long long x,y,z,n;
        cin >> x >> y >> z >> n;
        long long lcm = BCNN(x,y,z);
        long long res = pow(10,n-1);

        long long phandu = res % lcm;
        if( phandu == 0 ) cout << res;
        else 
        {
            long long result = res - phandu + lcm;
            if( result < pow(10,n) ) cout << result;
            else cout << -1;
        }

        
    cout << endl;    
    }

    return 0;
}
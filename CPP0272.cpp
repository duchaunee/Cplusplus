#include<bits/stdc++.h>

#define ll long long
const ll mod = pow(10,9) + 7;
using namespace std;

void nhap( ll a[], int n )
{
    for( int i = 0; i < n; i++ ) cin >> a[i];
}

ll gcdMang( ll a[], int n )
{
    ll res = a[0];
    for( int i = 1; i < n; i++ )
    {
        res = __gcd(a[i],res);
    }
    return res;
}

ll tichMang( ll a[], int n )
{
    ll x = 1;
    for( int i = 0; i < n; i++ )
    {
        x = ( x*a[i] ) % mod;
    }
    return x;
}

void solve( ll a[], int n )
{
    ll y = 1;
    for( int i = 0; i < gcdMang(a,n); i++ )
    {
        y = (y*tichMang(a,n)) % mod;
    }
    cout << y << endl;
}

int main()
{
    int t; cin >> t;
    while( t-- )
    {
        int n; cin >> n;
        ll a[n];
        nhap(a,n);
        solve(a,n);
    }
    return 0;
}
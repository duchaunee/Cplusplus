#include<bits/stdc++.h> 

using namespace std; 

int n,x;
bool res(int a,int b ) { 
    if(abs(x-a) < abs(x-b)) return 1;
    else return 0;
} 

void solve() { 
    cin >> n >> x;
    int a[n+1]; 
    for( int i = 0; i < n; i++ ) cin >> a[i]; 
    stable_sort(a,a+n,res); 
    for( int i = 0; i < n; i++ ) cout << a[i] << " ";
  
    cout << endl; 
}    


int main() {
    int t; cin >> t;
    while( t-- )
    {
        solve();
    }
}
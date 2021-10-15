#include<bits/stdc++.h> 

using namespace std; 

int main()
{ 
    int n, k, b;
    cin >> n >> k >> b;
    int x;

    int c[100001] = {0};
    for( int i = 0; i < b; i++ ) 
    {
        cin >> x;
        c[x] = 1;
    }

    int count = 0; //so den bi hong trong cua so k donvi
    for( int i = 1; i <= k; i++ ) // k den dau` tien
        if( c[i] == 1 ) count++;

    int res = count; // max = so den bi hong trong k den dau` tien
                    // min = 3

    for( int i = k+1; i <= n; i++ )
    {
        if( c[i-k] == 1 ) count--;
        if( c[i] == 1 ) count++;
        res = min(res,count);
    }
    cout << res;
        
    return 0; 
}
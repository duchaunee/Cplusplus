#include<bits/stdc++.h>

using namespace std;

// dùng sliding window
// code by duchau

int main()
{
    int t; cin >> t;
    while( t-- )
    {
        int n; cin >> n;
        int k; cin >> k;

        int a[n];
        int cnt = 0;
        for( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            if( a[i] <= k ) cnt++; // cnt là số chữ số >= k trong mảng
                                    // số phần tử trong cửa số = cnt
        }

        int count = 0;
        for( int i = 0; i < cnt; i++ ) // đánh dấu cửa sổ là các số đầu
        {
            if( a[i] <= k ) count++;
        }

        int x = 0;
        int temp;
        int max = count; // max = 2
        for (int i = cnt; i < n; i++ )
        {
            temp = a[x];
            if( temp <= k ) count--;
            if( a[i] <= k ) count++;
            if( count > max ) max = count;
            x++;
        }
        cout << cnt - max;


    cout << endl;
    }
    return 0;
}
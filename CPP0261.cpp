#include<bits/stdc++.h> 

using namespace std; 

void nhap( int a[][100], int n )
{
    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ ) cin >> a[i][j];
    }
}


void solve( int a[][100], int b[][100], int n, int m )
{
    int c[100][100];

    for( int i = 0; i < n; i++ ) // tao 1 ma tran c cung kich thuoc mtran a
    {
        for( int j = 0; j < n; j++ ) // 0 den 3
        {
            c[i][j] = b[i%m][j%m];
        }
    }


    for( int i = 0; i < n; i++ ) // (n*n)/(m*m) = 4
    {
        for( int j = 0; j < n; j++ ) // = 4
        {
            a[i][j] *= c[i][j];
        }
    }

    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ ) cout << a[i][j] << " ";
        cout << endl;
    }

}



int main() {
    int a[100][100];
    int b[100][100];

    int n; cin >> n;
    nhap(a,n);
   
    int m; cin >> m;
    nhap(b,m); 

    solve(a,b,n,m);

    return 0;
}
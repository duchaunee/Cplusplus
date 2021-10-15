#include<bits/stdc++.h>

using namespace std;


void input( int a[50][50], int n, int m ) {
    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < m; j++ )
        {
            cin >> a[i][j];
        }
    }
}


int main() {

    int n,m,p;
    cin >> n >> m >> p;
    int a[50][50];
    int b[50][50];
    input(a,n,m);
    input(b,m,p);

    int c[50][50];
    
    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < p; j++ )
        {
            c[i][j] = 0;
            for( int k = 0; k < m; k++ ) 
            {
                c[i][j] += a[i][k] * b[k][j];
            }              
        } 
    }

    
    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < p; j++ )
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
   
    return 0;
}
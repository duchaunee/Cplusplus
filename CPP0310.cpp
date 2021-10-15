#include<bits/stdc++.h>

using namespace std;

long long max( string str ) 
{
    for( int i = 0; i < str.size(); i++ )
    {
        if( str[i]  == '5' ) str[i] = '6';
    }
    return stoll(str);
}

long long min( string str ) 
{
    for( int i = 0; i < str.size(); i++ )
    {
        if( str[i] == '6' ) str[i] = '5';
    }
    return stoll(str);
}
 
 
int main() 
{
    int t; cin >> t;
    cin.ignore();
    while( t-- )
    {
        string x1,x2;
        cin >> x1 >> x2;

        cout << min(x1) + min(x2) << " ";
        cout << max(x1) + max(x2);

    cout << endl;
    }
}
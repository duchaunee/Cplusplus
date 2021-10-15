#include<bits/stdc++.h> 

using namespace std; 

void Cach1( string s )
{
    for( int i = 0; i < s.length(); i++ ) s[i] = tolower(s[i]);
    stringstream ss (s);
    vector <string> ans;
    string token = "";

    while( ss >> token )
    {
        ans.push_back(token);
    }

    for( int i = 0; i < ans.size(); i++ ) ans[i][0] -= 32;

    cout << ans[ans.size()-1] << " ";

    for( int i = 0; i < ans.size() - 1; i++ )
    {
        cout << ans[i] << " ";
    }
    ans.clear();
}

void Cach2( string s )
{
    for( int i = 0; i < s.length(); i++ ) s[i] = tolower(s[i]);
    stringstream ss (s);
    vector <string> ans;
    string token = "";

    while( ss >> token )
    {
        ans.push_back(token);
    }

    for( int i = 0; i < ans.size(); i++ ) ans[i][0] -= 32; 

    for( int i = 1; i < ans.size(); i++ )
    {
        cout << ans[i] << " ";
    }
    cout << ans[0];
    ans.clear();
}


int main()
{ 
    int t; cin >> t; 
    while( t-- )
    { 
        int n; cin >> n;
        scanf("\n");
        string s;
        getline(cin, s);
        if( n == 1 ) Cach1(s);
        if( n == 2 ) Cach2(s);

    cout << endl; 
    } 
    return 0; 
}
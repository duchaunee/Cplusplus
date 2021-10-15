
#include <bits/stdc++.h> 

using namespace std;  

int main() 
{ 
    int t; cin >> t; 
    cin.ignore();
    while( t -- ) 
    { 
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);

        set <string> ans;
        stringstream ss (s1);
        string token;
        while( ss >> token )
        {
            ans.insert(token);
        }
        stringstream ss2 (s2);

        while( ss2 >> token )
        {
            ans.erase(token);
        }
        for( auto it : ans ) cout << it << " ";

    cout << endl;    
    } 
    
    return 0; 
}

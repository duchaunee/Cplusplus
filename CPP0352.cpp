#include<bits/stdc++.h> 

using namespace std; 

int main() {
    int t; cin >> t;
    scanf("\n");
    map <string,int> MAP;
    while( t-- )
    {
        string str; 
        getline(cin, str); 
        
        for (int i = 0; i < str.length(); i++ ) str[i] = tolower(str[i]);
        stringstream ss (str);

        string res;
        string token; 
        vector <string> v; 
        
        while( ss >> token ) 
        { 
            v.push_back(token); 
        } 
    
        res += v[v.size()-1];
        for( int i = 0; i < v.size()-1; i++ ) res += v[i][0];
        
        MAP[res]++;

        if( MAP[res] == 1 ) cout << res;
        else cout << res << MAP[res];

        cout << "@ptit.edu.vn" << endl; 
    }
}
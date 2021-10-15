#include<bits/stdc++.h> 

using namespace std; 

int main() {
    string str; 
    getline(cin, str); 
    for(int i = 0; i < str.length(); i++ ) str[i] = tolower(str[i]);
    stringstream ss (str);

    int count = 0;
    for( int i = str.length() - 1; i >= 0 ; i-- ) 
    {
        count++;
        if( str[i] == ' ' ) break;
    }


    
    string tmp; 
    vector<string> v; 

    while( ss >> tmp ) 
    { 
        v.push_back(tmp); 
    } 

 
    for(int i=0; i < v.size() - 1; i++) v[i][0] -= 32;

    for(int i = 0; i < v.size() - 1; i++) 
    {
        cout << v[i];
        if( i != v.size() - 2 ) cout << " ";
    }

    cout << ", ";
    
    for( int i = 0; i < count; i++ ) v[v.size()-1][i] -= 32;
    
    cout << v[v.size()-1]; 
}
#include<bits/stdc++.h> 

using namespace std; 

int main() {
    string str; 
    getline(cin, str); 
    for (int i = 0; i < str.length(); i++ ) str[i] = tolower(str[i]);
    stringstream ss (str);

    string tmp; 
    vector<string> v; 

    while( ss >> tmp ) 
    { 
        v.push_back(tmp); 
    } 
 
    cout << v[v.size()-1];
    for(int i=0; i<v.size()-1; i++) cout << v[i][0];
    
    cout<<"@ptit.edu.vn"<<endl; 
}
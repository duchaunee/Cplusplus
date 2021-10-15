#include<bits/stdc++.h>

using namespace std;
 
int main() 
{
    int n; cin >> n;
    cin.ignore();
    set <string> s;
    while( n-- ) 
    {
        string str;
        getline(cin,str);
        s.insert(str);
    }
    cout << s.size();

    
}
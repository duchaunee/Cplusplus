#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> v;
    string s;
    bool check = false;
    
    while( cin >> s ) 
    {  
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
                
        if (check)
        {
            s[0] -= 32;
            check = false;
        }

        if (s.back() == '.' || s.back() == '?' || s.back() == '!')
        {
            s.back() = '\n';
            check = true;
        }
        v.push_back(s);  

    }    
    

    v[0][0] -= 32;
    for ( int i = 0; i < v.size(); i++ )
    {
        cout << v[i];
        if ( v[i].back() != '\n' )
            cout << " ";
    }
    return 0;
}
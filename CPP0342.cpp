#include <bits/stdc++.h> 

using namespace std; 

int main() 
{ 
    int t; cin >> t; 
    cin.ignore();
    while (t --) 
    { 
        string s;
        cin >> s;
        int k = 0;
        int res = 0;
        string str;
        int sum = 0;

        for( int i = 0; i < s.length(); i++ )
        {
            if( isdigit(s[i]) )
            {
                res += (s[i]-'0')*pow(10,k);
                str.push_back(res);
                k++;
            }
            else 
            {
                k = 0;
                res = 0;
                reserve(str.begin(),str.end());
                sum += stol(str);
                str.clear();
            }

        }

        cout << sum;
    } 
    
    return 0; 
}

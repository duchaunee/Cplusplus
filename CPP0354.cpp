#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while( t-- ) 
    {
        string str;
        getline(cin,str);    
        int check[str.size()] = {0};
        int count;

        for( int i = 0; i < str.size(); i++ )
        {
            count = 1;
            if( check[i] == 0 )
            {
                for( int j = i+1; j < str.size(); j++ )
                {
                    if( str[j] == str[i] )
                    {
                         check[j] = 1;
                         count++;
                    }    
                }
            }
            if( check[i] == 0 ) cout << str[i] << count;           
        }
        

    cout << endl;    
    }

    return 0;
}
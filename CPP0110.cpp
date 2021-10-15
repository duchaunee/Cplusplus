#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while( t-- ) 
    {
        string str;
        string str1;
        getline(cin,str);

        for( int i = 0; i < str.size() ; i++ )
        {
            if(str[i] - '0' == 0 && str[i+1] - '0' == 8 && str[i+2] - '0' == 4)
            {
                str[i] = '.';
                str[i+1] = '.';
                str[i+2] = '.';
            }
        }

  //      for( int i = 0; i < str.size(); i++ ) cout << str[i];

        for( int i = 0; i < str.size(); i++ )
        {
            if( str[i] != '.' ) cout << str[i];
        }
        
      
    cout << endl;    
    }

    return 0;
}
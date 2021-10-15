#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while( t-- ) 
    {   
        string str;
        getline(cin,str);
        int number = 0;
        int max = -9999;

        for( int i = 0; i < str.size(); i++ )
        {
            if( str[i] - '0' >= 0 && str[i] - '0' <= 9 ) 
            {
                number = number*10 + str[i] - '0';
            }
            else number = 0;
            if( number >= max )  max = number;
        }

        cout << max << endl;
   
    }

    return 0;
}
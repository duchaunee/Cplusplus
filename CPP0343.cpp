#include<bits/stdc++.h>

using namespace std;

//vector <int> vec;

int main() {
    int t; cin >> t;
    while( t-- ) 
    {
        int n = 0,dayso[200];
        char c;
        int demchan = 0, demle = 0;
        int count = 0;
        do {
            cin >> dayso[n];
            count++;
            if( dayso[n] % 2 == 0 ) demchan++;
            else demle++;
            ++n;
            c = getchar();
        }
        while( c!='\n' );

    if( count % 2 == 0 ) {
        if( demchan > demle ) cout << "YES";
        else cout << "NO";
    }
    else {
        if( demle > demchan ) cout << "YES";
        else cout << "NO";
    }

        
    cout << endl;    
    }

    return 0;
}
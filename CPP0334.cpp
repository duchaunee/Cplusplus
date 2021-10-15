#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while( t-- ) 
    {   
        string str;
        vector <int> vec;
        getline(cin,str);

        int sum = 0;
        int res = 0;

        for( int i = 0; i < str.size() ; i++ ) {
            if( str[i] >= 'a' && str[i] <= 'z' ) str[i] = '*';
        }

        for( int i = 0; i < str.size() ; i++ ) {
            if( str[i] != '*' ) vec.push_back(str[i] - '0');
            else  {
                for( int i = 0; i < vec.size(); i++ ) res = res*10 + vec[i];
                sum += res;
                vec.clear();
                res = 0;
            }
        }
        
        int sum1 = 0;
        for( int i = 0; i < vec.size() ; i++ ) {
            sum1 = sum1*10 + vec[i];
        }

        sum += sum1;
        cout << sum;

        
    cout << endl;   
    }

    return 0;
}
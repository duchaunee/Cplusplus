#include<bits/stdc++.h> 

using namespace std; 

int main() { 
    string str1, str2; 
    getline (cin,str1); 
    getline(cin, str2); 
    if (str1.find(str2) != 'NULL') 
    { 
        str1.replace( str1.find(str2), str2.length(), "" ); 
        cout << str1 << endl; 
    }
    return 0;
}
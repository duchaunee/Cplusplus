#include <bits/stdc++.h> 

using namespace std;  

int main() 
{ 
    int t; cin >> t; 
    while( t -- ) 
    { 
        int n; cin >> n;
        int a[n];
        for( int i = 0; i < n; i++ ) cin >> a[i];
        int left = 0, right = n - 1;

        int count = 0;
        while( left <= right )
        {   
            if( a[left] == a[right] ) 
            {
                left++;
                right--;
            }
            else if ( a[left] < a[right] )
            {
                left++;
                a[left] += a[left-1];
                count++;
            }
            else 
            {
                right--;
                a[right] += a[right+1];
                count++;
            }

        }
        cout << count << endl;
    } 
    
    return 0; 
}
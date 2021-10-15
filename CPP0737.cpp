#include<bits/stdc++.h> 

using namespace std; 

int main() 
{ 
	int t ; 
	cin >> t; 
	while( t-- ) 
	{ 
        int n, k;
        cin >> n >> k;
        int a[n];
        for( int i = 0; i < n; i++ ) cin >> a[i];

        double sum;
        double max = -999;
        vector <int> v;
        for( int i = 0; i < n - k + 1; i++ )
        {   
            sum = 0;
            for( int j = i; j < i+k; j++ )
            {
                sum += a[j];
            }
            if( sum/k > max ) 
            {
                max = sum/k;
                for( int j = i; j < i+k; j++ )
                {
                    v.push_back(a[j]);
                }   
            }
        }

        for( int i = v.size() - k; i < v.size(); i++ )
        {
            cout << v[i] << " ";
        }

        cout << endl;
	} 
	return 0;
}

#include <bits/stdc++.h>

using namespace std;
 
int main()
{
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
   	    int a[n];
   	    set<int> s;
   	    
   	    for(int i=0 ; i<n ; i++)
   	    {
   	    	cin>>a[i];
   	    	s.insert(a[i]);
		}
		
		bool check = false;
		
		for(int i=0 ; i<n-1; i++)
		{
			int k = x + a[i];
			
			if( s.find(k) != s.end() ) 
			{
				check = true;
				break;
			}
		}
		
		if( check) cout << 1;
        else cout << -1;
    cout << endl;    
	}
    return 0;
}
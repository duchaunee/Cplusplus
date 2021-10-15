#include<bits/stdc++.h> 

using namespace std; 

long long mod(long long a, long long b, long long c)   //(a*b) % c = (a%c * b%c)%c (1)
{
	if( b == 0 ) return 0;
	long long temp = mod(a,b/2,c);
	//de quy
	if( b % 2 == 0 ) return (2*temp%c)%c; // 2*(a*b/2) voi a*b/2 la` temp gan b = b/2 
										// roi ADCT (1)

	else return (a%c + 2*temp%c)%c ;  // neu b la so le thi tru di 1 roi lam tuong tu
									// a*b = a + a*(b-1)/2( '/' la chia nguyen
									// k phai chia nhu trong toan hoc) roi ADCT (1)
				// KHI B LA SO LE THI B/2 LA DA TRU DI 1 ROI, vd 9/2 = 4					
}


int main() 
{
	int t;
	cin >> t;
	while( t-- )
	{
		long long a,b,c;
		cin >> a >> b >> c;
		cout << mod(a,b,c);
	cout << endl;	
	}
    
}
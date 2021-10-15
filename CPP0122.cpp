#include<bits/stdc++.h>
using namespace std;

long long GCD(long long a,long long b){
	if (b == 0) 
        return a; 
    return GCD(b, a % b); 
}


long long LCM(long long n) { 
    long long temp = 1;     
    for (long long i = 1; i <= n; i++) 
        temp = (long long)(temp * i)/(GCD(temp, i)); 
    return temp; 
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<LCM(n)<<endl;		
	}
}


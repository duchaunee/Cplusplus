#include<bits/stdc++.h>

using namespace std;


int main(){
	string S;
	cin >> S;
	
	for(int i = 0; i < S.size(); i++ )
	{
		if( S[i] >= 65 && S[i] <= 90 ) S[i] += 32;
		if( S[i] == 'a' || S[i] == 'e' || S[i] == 'i' 
		|| S[i] == 'o' || S[i] == 'u'|| S[i] == 'y') S[i] = '*';

	}
	
	for(int i = 0; i < S.size(); i++ )
	{
		if( S[i] != '*' ) cout << "." << S[i];
	}

	return 0;
}



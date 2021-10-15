#include<bits/stdc++.h>

using namespace std;

int checkSize(string str1, string str2) { 
    int size1 = str1.size(), size2 = str2.size(); 
    
    if (size1 > size2) return 1; //chuoi 1 > chuoi 2
    if (size1 < size2) return 0; // chuoi 2 > chuoi 1

    for ( int i = 0; i < size1; i++) // 2 chuoi bang nhau
    	if (str1[i] > str2[i]) return 1; 	
    	else if (str1[i] < str2[i]) return 0; 
       	 
    return 0;
} 


string solve(string str1, string str2) { 
	if( checkSize(str1,str2) ) swap(str1,str2);
	string str;
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());
	int size1 = str1.size();
	int size2 = str2.size();
	
	int sum;
	int temp = 0;
	for( int i = 0; i < size1; i++ )
	{
		sum = ((str2[i] -'0') - (str1[i] - '0') - temp);
		if( sum < 0 ) 
		{
			sum += 10;
			str.push_back(sum % 10 + '0');
			temp = 1;
		}
		else
		{
			str.push_back(sum % 10 + '0');
			temp = 0;
		}	
	}

	
	for( int i = size1; i < size2; i++ )
	{
		sum = (str2[i] - '0') - temp;
		
		if( sum < 0 ) 
		{
			sum += 10;
			str.push_back(sum % 10 + '0');
			temp = 1;
		}
		else
		{
			str.push_back(sum % 10 + '0');
			temp = 0;
		}
	}
	
	reverse(str.begin(), str.end());
	
	return str;
		
} 

int main(){
	int t;
	cin >> t;
	while( t-- ) {
		string a,b;
		cin >> a;
		cin >> b;
		cout << solve(a,b) << endl;
	}
	return 0;
}



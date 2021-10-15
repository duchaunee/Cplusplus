#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int k;
		cin>>k;
		int a[100000]={0};
		for(int i=0;i<s.length();i++){
			a[s[i]]++;
		}
		
		int cnt=0;
		for(int i=0;i<26;i++){
			if(a[i]==0){
				cnt++;
			}
		}if(cnt<=k) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}

  return 0;
}

#include <bits/stdc++.h>

using namespace std;
int stt = 0;

struct GiangVien
{
	string fullName;
	string major;
	string maGV;
    string name;
	int STT;
};

void input( GiangVien &ds )
{
	stt++;	
	ds.maGV += "GV";
	if( stt < 10 ) 
	{
		ds.maGV += "0";
		ds.maGV += to_string(stt);
		ds.STT = stt;	
	}
	else 
	{
		ds.maGV += to_string(stt);	
		ds.STT = stt;
	}
	scanf("\n");
	getline(cin,ds.fullName);
	getline(cin,ds.major);

    stringstream ss (ds.fullName);
    string token;
    string str = "";
    while( ss >> token )
    {
        str += token;
        str += " ";
    }
    ds.name = "";
    for( int i = str.size()-2; i >= 0; i-- )
    {
        if( !isalpha(str[i]) ) break;
        ds.name += str[i];
    }
    reverse(ds.name.begin(),ds.name.end());
}

void output( GiangVien ds )
{ 
	cout << ds.maGV << " " << ds.fullName << " ";
	transform(ds.major.begin(), ds.major.end(), ds.major.begin(), ::toupper);
	string ans = "";
	stringstream ss (ds.major);
	string token;
	while( ss >> token )
	{
		ans += token[0];
	}
	ds.major = ans;
	cout << ds.major;		
}


bool check( GiangVien a, GiangVien b )
{
	if( a.name < b.name ) return true;
	if( a.name == b.name && a.STT < b.STT ) return true;
	else return false;
}


int main()
{
    int n; cin >> n;
    scanf("\n");
    GiangVien ds[n];
	 
    for (int i = 0; i < n; i++) input(ds[i]);

    sort(ds,ds+n,check);

    for (int i = 0; i < n; i++) 
    {
    	output(ds[i]);
    	cout << endl;
	}
		
    return 0;
}





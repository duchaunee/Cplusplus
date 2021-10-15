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

    transform(ds.major.begin(), ds.major.end(), ds.major.begin(), ::toupper);
	string ans = "";
	stringstream ss (ds.major);
	string token;
	while( ss >> token )
	{
		ans += token[0];
	}
	ds.major = ans;
}

void output( GiangVien ds )
{ 
	cout << ds.maGV << " " << ds.fullName << " ";	
	cout << ds.major << endl;	
}


int main()
{
    int n; cin >> n;
    scanf("\n");
    GiangVien ds[n];
	 
    for (int i = 0; i < n; i++) input(ds[i]);

 
    int t; cin >> t;
    while (t--)
    {
        scanf("\n");
        string boMon; getline(cin,boMon);
        transform(boMon.begin(), boMon.end(), boMon.begin(), ::toupper);
        stringstream ss (boMon);
        string token;
        string s = "";
        while( ss >> token )
        {
            s += token[0];
        }
        cout << "DANH SACH GIANG VIEN BO MON " << s << ":\n";
        for (int i = 0; i < n; i++) 
        {
            if( ds[i].major == s ) output(ds[i]);
        }

    }
		
    return 0;
}



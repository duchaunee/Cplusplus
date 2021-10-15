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
	}
	else 
	{
		ds.maGV += to_string(stt);	
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
        string str; cin >> str;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << str << ":\n";
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        
        for (int i = 0; i < n; i++)
        {
            ds[i].name = ds[i].fullName;
            transform(ds[i].name.begin(), ds[i].name.end(), ds[i].name.begin(), ::tolower);
            int cnt = 0;

            for (int j = 0; j < ds[i].name.size(); j++)
            {
                for (int k = 0; k < str.size(); k++)
                {
                    if( ds[i].name[j] != str[k]  ) 
                    {
                        cnt = 0;
                        break;
                    }
                    else 
                    {
                        cnt++; 
                        break;
                    }
                }
                if( cnt == str.size() ) 
                {
                    output(ds[i]);
                    break;
                }
            }

        }
        

    }
		
    return 0;
}



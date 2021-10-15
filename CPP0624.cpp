#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{
	string ten;
	string mail;
    string maSV;
	string lop;
    string nganhHoc;
};	
	
void nhap( SinhVien &a )
{ 
    cin >> a.maSV;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.lop;

    for( int i = 3; i < 7; i++ )
        a.nganhHoc += a.maSV[i];
    
    cin >> a.mail;
}

void xuat( SinhVien a )
{ 	
    cout << a.maSV << " ";
    cout << a.ten << " ";
    cout << a.lop << " ";
    cout << a.mail << endl; 
} 


int main()
{
    int n; cin >> n;
    SinhVien ds[n+1];
    for (int i = 0; i < n; i++) nhap(ds[i]);

	int t; cin >> t;
 	while (t--)
 	{
        string str = ""; 
        str += "DC";
        scanf("\n");
 		string major; getline(cin,major);
        transform(major.begin(),major.end(), major.begin(),::toupper );
        stringstream ss (major);
        string token;
        while( ss >> token )
        {
            str += token[0];
        }

 		cout << "DANH SACH SINH VIEN NGANH " << major << ":\n";
 		for (int i = 0; i < n; i++) 
 		{
            if( ds[i].nganhHoc == "DCCN" )
 			if ( ds[i].nganhHoc == str ) xuat(ds[i]);
            //cout << ds[i].nganhHoc << " ";
		}
	}

    return 0;
}



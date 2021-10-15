#include <bits/stdc++.h>

using namespace std;

struct DoanhNghiep
{
	string maDN;
	string tenDN;
	int soSV;
};

void input( DoanhNghiep &dn )
{		
    scanf("\n");
    cin >> dn.maDN;
    scanf("\n");
	getline(cin,dn.tenDN);
	cin >> dn.soSV;
}

void output( DoanhNghiep dn )
{ 
	cout << dn.maDN << " " << dn.tenDN << " ";	
	cout << dn.soSV << endl;	
}

bool check( DoanhNghiep a, DoanhNghiep b )
{
    if( a.soSV > b.soSV ) return true;
    if( a.soSV == b.soSV && a.maDN < b.maDN ) return true;
    else return false;
}

int main()
{
    int n; cin >> n;
    scanf("\n");
    DoanhNghiep dn[n];
	 
    for (int i = 0; i < n; i++) input(dn[i]);
    sort(dn,dn+n,check);
    int t; cin >> t;
    while (t--)
    {
        int a,b; cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
        for (int i = 0; i < n; i++)
        {
            if( dn[i].soSV >= a && dn[i].soSV <= b ) output(dn[i]);
        }

    }
   // for (int i = 0; i < n; i++) output(dn[i]);
		
    return 0;
}



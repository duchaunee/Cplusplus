#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{
	string ten;
	string mail;
    string maSV;
	string lop;
};

void nhap( SinhVien &a )
{
    cin >> a.maSV;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.lop;
    cin >> a.mail;
}

bool check( SinhVien a, SinhVien b )
{
    if( a.lop < b.lop ) return true;
    if( a.lop == b.lop && a.maSV < b.maSV ) return true;
    else return false; 
}

    
void xuat ( SinhVien a )
{ 	
    cout << a.maSV << " ";
    cout << a.ten << " ";
    cout << a.lop << " ";
    cout << a.mail << endl;
} 


int main(){
    int n; cin >> n;
    SinhVien ds[n+1];
    for (int i = 0; i < n; i++) nhap(ds[i]);
 	sort( ds,ds+n,check );
     for (int i = 0; i < n; i++) xuat(ds[i]);

    return 0;
}




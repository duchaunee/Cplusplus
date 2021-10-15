#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{

	string ten;
	string mail;
    string maSV;
	string lop;
}; 
  
void xuat( SinhVien &a )  
{
    cout << a.maSV << " ";
    cout  << a.ten << " ";
    cout << a.lop << " ";
    cout << a.mail << endl;
}




bool check( SinhVien a, SinhVien b )
{
    if( a.maSV < b.maSV ) return true;
    else return false; 
}


int main(){
    SinhVien ds[1000];
    int x = 0;
    while( cin >> ds[x].maSV ) 
    { 
        scanf("\n");
        getline(cin, ds[x].ten);
        cin >> ds[x].lop;
        cin >> ds[x].mail;
        x++;
    }
 	sort( ds,ds+x,check );
    for (int i = 0; i < x; i++) xuat(ds[i]);


    return 0;
}
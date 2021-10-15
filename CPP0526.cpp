#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

struct danhsach
{
    string ten;
    string ngaysinh;
    string ngay, thang, nam;
};

void nhap(danhsach &ds)
{
    cin >> ds.ten;
    cin >> ds.ngaysinh;
}

bool sapxep( danhsach a, danhsach b )
{
   if( a.nam > b.nam ) return true;
   else if( a.nam == b.nam && a.thang > b.thang ) return true;
   else if( a.nam == b.nam && a.thang == b.thang && a.ngay > b.ngay ) return true;
   else return false;
}

int main()
{
    int n; cin >> n;
    danhsach ds[n];
    for( int i = 0; i < n; i++ ) 
    {
        nhap(ds[i]);
        for( int j = 0; j < 2; j++ )
            ds[i].ngay += ds[i].ngaysinh[j];
        for( int j = 3; j < 5; j++ )
            ds[i].thang += ds[i].ngaysinh[j];
        for( int j = 6; j < 10; j++ )
            ds[i].nam += ds[i].ngaysinh[j];
    }

    sort(ds,ds+n,sapxep);

    cout << ds[0].ten << endl;
    cout << ds[n-1].ten << endl;
    return 0;
}
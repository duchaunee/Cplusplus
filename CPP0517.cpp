#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

struct NhanVien
{
    string ten, gioiTinh, ngaySinh, diaChi, MSThue, ngayKy;
};

void nhap(NhanVien &ds)
{
    scanf("\n");
    getline(cin, ds.ten);
    getline(cin, ds.gioiTinh);
    getline(cin, ds.ngaySinh);
    getline(cin, ds.diaChi);
    getline(cin, ds.MSThue);
    getline(cin, ds.ngayKy);
}

void inds( NhanVien ds[], int N )
{
    for (int i = 0; i < N; i++)
    {
        if( i+1 < 10 ) cout << "0000" << i+1 << " ";     
        else cout << "000" << i+1 << " ";
        
        cout << ds[i].ten << " " << ds[i].gioiTinh << " " << ds[i].ngaySinh;
        cout << " " << ds[i].diaChi << " " << ds[i].MSThue << " " << ds[i].ngayKy;
        cout << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
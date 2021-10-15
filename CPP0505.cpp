#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

struct NhanVien {
     string hoTen;
     string gioiTinh;
     
     int ngay, thang, nam;
     char gachcheo;

     string diaChi;
     string MSThue; 

     int ngay1, thang1, nam1;
     char gachcheo1;
};

void nhap( NhanVien &a ) {
    getline(cin,a.hoTen);
    getline(cin,a.gioiTinh);
    
    cin >> a.ngay >> a.gachcheo >> a.thang >> a.gachcheo >> a.nam;
//    cin >> a.ngay1 >> a.gachcheo1 >> a.thang1 >> a.gachcheo1 >> a.nam1;
    cin.ignore();

    getline(cin,a.diaChi);
    getline(cin,a.MSThue);

   cin >> a.ngay1 >> a.gachcheo1 >> a.thang1 >> a.gachcheo1 >> a.nam1;
}


void in( NhanVien a ) {
    cout << "00001" << " ";
    cout << a.hoTen << " ";
    cout << a.gioiTinh << " ";
    
    printf("%02d/%02d/%d ",a.ngay, a.thang, a.nam); 

    cout << a.diaChi << " ";
    cout << a.MSThue << " ";

    printf("%02d/%02d/%d",a.ngay1, a.thang1, a.nam1);
    
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
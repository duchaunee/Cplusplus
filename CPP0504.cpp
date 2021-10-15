#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

struct SinhVien {
     string hoten;
     string lop;
     int ngay,thang,nam;
     char gachcheo;
     float gpa;
};

void nhap( SinhVien &a ) {
    getline(cin,a.hoten);
    getline(cin,a.lop);
    cin >> a.ngay >> a.gachcheo >> a.thang >> a.gachcheo >> a.nam;
    cin >> a.gpa;
}


void in( SinhVien a ) {
    cout << "B20DCCN001" << " ";
    cout << a.hoten << " ";
    cout << a.lop << " ";
    printf("%02d/%02d/%d ", a.ngay, a.thang, a.nam);
    cout << fixed << setprecision(2) << a.gpa;
}


int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

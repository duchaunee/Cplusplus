#include<bits/stdc++.h>

using namespace std;

struct ThiSinh {
     string hoten;
     string ngaysinh;
     float point1, point2, point3;
};

void nhap( ThiSinh &A ) {
    getline(cin,A.hoten);
    getline(cin,A.ngaysinh);
    cin >> A.point1 >> A.point2 >> A.point3;
}


void in( ThiSinh A ) {
    cout << A.hoten << " ";
    cout << A.ngaysinh << " ";
    cout << fixed << setprecision(1) << A.point1 + A.point2 + A.point3;
}


int main() {
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

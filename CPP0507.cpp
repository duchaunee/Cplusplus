#include<bits/stdc++.h>

using namespace std;

struct PhanSo {
	long long tuSo;
	long long mauSo;
};


void nhap( PhanSo &p ) {
	cin >> p.tuSo;
	cin >> p.mauSo;
}

PhanSo tong( PhanSo &p, PhanSo &q ) {
	PhanSo t;
	t.tuSo = p.mauSo*q.tuSo + q.mauSo*p.tuSo; // nhan cheo
	t.mauSo = p.mauSo*q.mauSo; //tich 2 mau so
	long long gcd = __gcd(t.tuSo,t.mauSo); // ucln cua tu so va mau so
	
	t.tuSo = t.tuSo /gcd;  	//rut gon tu so
	t.mauSo = t.mauSo /gcd; 	//rut gon mau so
	
	return t;
}


void in( PhanSo &t ) {
	cout << t.tuSo << "/" << t.mauSo;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

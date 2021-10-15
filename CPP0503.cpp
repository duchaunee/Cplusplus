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

void rutgon( PhanSo &p ) {
	long long gcd =__gcd(p.tuSo,p.mauSo);
	p.tuSo = p.tuSo/gcd;
	p.mauSo = p.mauSo/gcd;
}

void in( PhanSo p ) {
	cout << p.tuSo << "/" << p.mauSo;
	cout << endl;
}


int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

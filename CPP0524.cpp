#include<bits/stdc++.h> 

using namespace std; 

struct sv
{
    string maSV;
    string tenSV;
    string lop;
    float diem1,diem2,diem3;
};

bool sapXep( sv a, sv b )
{
    return ( a.maSV < b.maSV );
}

int main()
{ 
    int n; cin >> n;
    sv a[n];

    for( int i = 0; i < n; i++ )
    {
        scanf("\n");
        getline(cin, a[i].maSV);
        scanf("\n");
        getline(cin, a[i].tenSV);
        scanf("\n");
        getline(cin, a[i].lop);
        cin >> a[i].diem1 >> a[i].diem2 >> a[i].diem3;
    }
    sort(a,a+n,sapXep);

    for( int i = 0; i < n; i++ )
    {
        cout << i + 1 << " " << a[i].maSV << " " << a[i].tenSV << " " << a[i].lop << " ";
        cout << fixed << setprecision(1) << a[i].diem1 << " " << a[i].diem2 << " " << a[i].diem3 << endl;
    }

    return 0; 
}
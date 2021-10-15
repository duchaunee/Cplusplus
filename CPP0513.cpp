#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string maSV;
    string ten, lop;
    int ngay, thang, nam;
    char gachcheo;
    float gpa;
};


void nhap( SinhVien *ds, int N)
{
    for (int i = 0; i < N; i++)
    {
        string str = "B20DCCN";
        string s = "00";
        string s1 = "0";
        if( i+1 < 10 ) ds[i].maSV = str + s + to_string(i+1);
        else ds[i].maSV = str+ s1 + to_string(i+1);

        scanf("\n");
        getline(cin, ds[i].ten);
        cin >> ds[i].lop;
        cin >> ds[i].ngay >> ds[i].gachcheo >> ds[i].thang >> ds[i].gachcheo >> ds[i].nam;
        cin >> ds[i].gpa;
    }
}

void in( SinhVien *ds, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << ds[i].maSV << " " << ds[i].ten << " " << ds[i].lop << " ";
        
        printf("%.2d/",ds[i].ngay);
        printf("%.2d/",ds[i].thang);
        cout << ds[i].nam << " ";

        cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main() {
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
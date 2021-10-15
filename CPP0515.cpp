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

bool sapxep( SinhVien a, SinhVien b )
{
    return ( a.gpa > b.gpa );
}

void nhap( SinhVien *ds, int N)
{
    for (int i = 0; i < N; i++)
    {
        string s = "00";
        string s1 = "0";
        if( i+1 < 10 ) ds[i].maSV = "B20DCCN" + s + to_string(i+1);
        else ds[i].maSV = "B20DCCN" + s1 + to_string(i+1);

        scanf("\n");
        getline(cin, ds[i].ten);
        for( int j = 0; j < ds[i].ten.size(); j++ ) ds[i].ten[j] = tolower(ds[i].ten[j]);
        stringstream ss (ds[i].ten);
        
        string token,ans;
        while( ss >> token )
        {
            token[0] -= 32;
            ans += token;
            ans += " ";
        }
        ds[i].ten = ans;
        
        cin >> ds[i].lop;
        cin >> ds[i].ngay >> ds[i].gachcheo >> ds[i].thang >> ds[i].gachcheo >> ds[i].nam;
        cin >> ds[i].gpa;
    }
    sort(ds,ds+N,sapxep);
}



void in( SinhVien *ds, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << ds[i].maSV << " ";

        cout << ds[i].ten << " ";
        
        cout << ds[i].lop << " ";
        
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

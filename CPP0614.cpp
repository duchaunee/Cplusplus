#include<bits/stdc++.h>

using namespace std;
int stt = 0;

class NhanVien
{
private:
    string ten, gioiTinh, ngaySinh, diaChi, MSThue, ngayKy;
    string STT;

public:

    friend istream &operator >> ( istream &is, NhanVien &ds )
    {
       	stt++;
    	if( stt < 10 ) 
    	{
    		ds.STT += "0000";
    		ds.STT += to_string(stt);
		}
		else 
		{
			ds.STT += "000";
    		ds.STT += to_string(stt);	
		}
        scanf("\n");
        getline(is, ds.ten);
        is >> ds.gioiTinh >> ds.ngaySinh;
        scanf("\n");
        getline(is, ds.diaChi);
        is >> ds.MSThue >> ds.ngayKy;
        return is;
    }

    friend ostream &operator << ( ostream &os, NhanVien &ds )
    { 
        os << ds.STT << " " << ds.ten << " " << ds.gioiTinh << " " << ds.ngaySinh;
        os << " " << ds.diaChi << " " << ds.MSThue << " " << ds.ngayKy;
        os << endl;
     
        return os;
    }

};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

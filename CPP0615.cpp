#include<bits/stdc++.h>

using namespace std;
int stt = 0;

class NhanVien
{
private:
    string ten, gioiTinh, ngaySinh, diaChi, MSThue, ngayKy;
    string STT;
    

public:
    string ngay,thang,nam;
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

        for( int i = 0; i < 2; i++ )
            ds.thang += ds.ngaySinh[i];
        for( int i = 3; i < 5; i++ )
            ds.ngay += ds.ngaySinh[i];
        for( int i = 6; i < 10; i++ )
            ds.nam += ds.ngaySinh[i];    


        scanf("\n");
        getline(is, ds.diaChi);
        is >> ds.MSThue >> ds.ngayKy;
        return is;
    }

    friend ostream &operator << ( ostream &os, NhanVien &ds )
    { 
        os << ds.STT << " " << ds.ten << " " << ds.gioiTinh << " ";
        os << ds.thang << "/" << ds.ngay << "/" << ds.nam ;
        os << " " << ds.diaChi << " " << ds.MSThue << " " << ds.ngayKy;
        os << endl;
     
        return os;
    }

};

bool check( NhanVien a, NhanVien b )
{
    if( a.nam < b.nam ) return true;
    if( a.nam == b.nam && a.thang < b.thang ) return true;
    if( a.nam == b.nam && a.thang == b.thang && a.ngay < b.ngay ) return true;
    else return false;
}

void sapxep( NhanVien *ds, int N )
{
    sort(ds,ds+N,check);
}


int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}


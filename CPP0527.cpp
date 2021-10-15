#include <bits/stdc++.h>

using namespace std;

struct solve
{
    int gio, phut, giay;
};


bool sapXep( solve a, solve b)
{
    if (a.gio < b.gio)
    return true;
    else if (a.gio == b.gio && a.phut < b.phut)
    return true;
    else if (a.gio == b.gio && a.phut == b.phut && a.giay < b.giay)
    return true;
    else
    return false;
}

int main()
{
    int n; cin >> n;
    solve a[n];

    for( int i = 0; i < n; i++ )
        cin >> a[i].gio >> a[i].phut >> a[i].giay;

    sort(a,a+n,sapXep);

    for( int i = 0; i < n; i++ )
        cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
        
    

}
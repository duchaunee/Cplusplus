#include <bits/stdc++.h>

using namespace std;

void min(int m, int s)
{
    vector <int> a(m);
    s -= 1;
    for (int i = m - 1; i >= 0; i--)
    {
        if (s > 9)
        {
            a[i] = 9;
            s -= 9;
        }
        else
        {
            a[i] = s;
            s = 0;
        }
    }
    a[0] += 1;
    for (int i = 0; i < m; i++)
        cout << a[i];
}

void max(int m, int s)
{
    vector <int> a(m);
    for (int i = 0; i < m; i++)
    {
        if (s > 9)
        {
            a[i] = 9;
            s -= 9;
        }
        else
        {
            a[i] = s;
            s = 0;
        }
    }
    for (int i = 0; i < m; i++)
        cout << a[i];
}

int main()
{
    int m, s;
    cin >> m >> s;
    if (s > 9 * m || s == 0)
        cout << "-1 -1";
    else
    {
        min(m, s);
        cout << " ";
        max(m, s);
    }
    return 0;
}
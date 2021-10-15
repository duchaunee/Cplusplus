#include <bits/stdc++.h>

using namespace std;

int solve(string s)
{
    long long sum = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) // 2^x
    {
        if (s[i] == '1')
        {
            if (i % 4 == 0) sum += 1; // x % 4 == 0 thi 2^x % 5 = 1

            if (i % 4 == 1) sum += 2; // x % 4 == 1 thi 2^x = 2^(x-1)*2^1 ma 2^(x-1) % 5 du 1 
										//suy ra 2^(x-1)*2^1 du 1*2^1 = 2

									 // kieu bien doi tu bthuc ban dau (x % 4 == 0 thi 2^x % 5 = 1)

    		if (i % 4 == 2) sum += 4; // x % 4 == 2 thi 2^x % 5 = 4 (tuong tu)   du 1*2^2 = 4
            if (i % 4 == 3) sum += 3; // x % 4 == 3 thi 2^x % 5 = 3 (tuong tu)   du 1*2^3 = 8 % 5 
																				//lai du tiep 3

			// lay vd don gian nhat la x = 0,1,2,3...
			//thi 2^x la 1,2,4,8 chia du cho 5 duoc 1,2,4,3
        }
    }
	return sum;
 
}
int main()
{
    int t; cin >> t;
	scanf("\n");
    while (t--)
    {
        string s;
        cin >> s;
        if( solve(s) % 5 == 0 ) cout << "Yes";
		else cout << "No";
	cout << endl;	
    }
}
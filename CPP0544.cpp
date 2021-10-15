#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

#define PI 3.141592653589793238

int main()
{
	int t; cin >> t;
	while( t-- )
	{
		double xA,yA,xB,yB,xC,yC;
        cin >> xA >> yA >> xB >> yB >> xC >> yC;
        double a,b,c;

        double res,S,R;
        a = sqrt( (xB - xC)*(xB - xC) + (yB - yC)*(yB - yC) );
        b = sqrt( (xA - xC)*(xA - xC) + (yA - yC)*(yA - yC) );
        c = sqrt( (xA - xB)*(xA - xB) + (yA - yB)*(yA - yB) );

        double p = (a+b+c)/2; // nua chu vi
        
        if( a >= b + c || a <= abs(b-c) ) cout << "INVALID";
        else
        {
            S = sqrt( p*(p-a)*(p-b)*(p-c) );
            R = a*b*c/(4*S);
            res = PI*R*R;
            printf("%.3lf", res);
        }
        //cout << a << " " << b << " " << c;
        
    cout << endl;
	}
	
	return 0;
}

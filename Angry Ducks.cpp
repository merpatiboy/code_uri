#include <iostream>
#include <math.h>
#define graf 9.80665
#define PI 3.14159
using namespace std;
int main()
{
    double xc,xa,xb,s_dekat,s_jauh,angle,vo,t1,t2,h;
    xa =graf/2.0;
    cin >> h;
    cin >> s_dekat;
    cin >> s_jauh;
    cin >> vo;
    cin >> angle;
    xb = vo*sin(angle*PI/180.0);
    cout << xa << endl;
    cout << xb << endl;
    xc = h;
    cout << xc << endl;
    t1 = (xb + sqrt(pow(xb,2)+(4*xa*xc)))/(2*xa);
    t2 = (xb - sqrt(pow(xb,2)+(4*xa*xc)))/(2*xa);
    double tn,hasil;
    if (t1>t2)tn=t1;
    else tn=t2;
    hasil = vo*cos(angle*PI/180.0)*tn;
    cout << hasil << endl;
    cout << t1 << ","<< t2  << endl;
}

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
void max_cek(double &a, double &b, double &c)
{
    if(c>=a && c>=b)
    {
        c = c;
        a = a;
        b = b;
    }
    else if(b>=c && b>=a)
    {
       swap(b,c);
    }
    else if(a>=b && a>=c)
    {
        swap(a,c);
    }
}
int main()
{
    double a,b,c,max__;
    while(1){
        cin >> a;
        int count_s = getchar();
        if(count_s == EOF)break;
        cin >> b;
        cin >> c;
        max_cek(a,b,c);
        double half_p = (a+b+c)/2.0;
        double area_t = sqrt(half_p*(half_p-a)*(half_p-b)*(half_p-c));
        double r_c_in = 2.0 * area_t / (a+b+c);
        double r_c_out = (a*b*c)/sqrt(((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
        double area_c_out = r_c_out*r_c_out*3.1415926535897;
        double area_c_in = r_c_in*r_c_in*3.1415926535897;
        printf("%.4lf %.4lf %.4lf\n",area_c_out-area_t,area_t-area_c_in,area_c_in);
    }

}

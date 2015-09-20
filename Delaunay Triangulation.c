#include <iostream>
#include <stdio.h>
#include <string.h>
#include<math.h>
using namespace std;

int main()
{
    long long double x,L_d,I=3;
    char L[100];
    cin >> L;
    for(int a=0;a<8;a++)
    {
        L_d += pow(10,8-a)*(L[a]-'0');
    }
    x = (L_d-I)/L_d;
    printf("%.6lf\n",x);
}

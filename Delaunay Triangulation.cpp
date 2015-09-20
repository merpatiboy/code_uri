#include <iostream>
#include <stdio.h>
#include <string.h>
#include<math.h>
using namespace std;

int main()
{
    while(1)
    {
        double x,L_d=0,I=3;
        char L[100];
        cin >> L;
        if(strcmp(L,"0")==0)break;
        if(strlen(L)>6)
        {
            for(int a=0;a<8;a++)
            {
                L_d += pow(10,7-a)*(L[a]-'0');
            }
        }
        else{
            for(int a=0;a<strlen(L);a++)
            {
                 L_d += pow(10,strlen(L)-a-1)*(L[a]-'0');
            }
        }
        x = (L_d-I)/L_d;
        if(x>=0)printf("%.6lf\n",x);
        else printf("%.6lf\n",x*-1.0);
    }

}

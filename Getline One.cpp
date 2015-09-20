#include <stdio.h>
#include <math.h>

int main()
{
    char kata[1000];
    double jumlah=0,total=0,x=0;
    while(x<3){
    gets(kata);
    scanf("%lf",&jumlah);
    getchar();
    total+=jumlah;
    x++;
    }
    printf("%.1lf",total/x);
}

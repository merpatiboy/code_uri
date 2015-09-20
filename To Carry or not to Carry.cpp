#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;
int simpanx[34],simpany[34],simpanhasil[34];
void mulai()
{
        for(int a=0;a<33;a++)
        {
            simpanx[a]=0;
            simpany[a]=0;
            simpanhasil[a]=0;
        }
}
int cekx(unsigned long long int x)
{
    unsigned long long int a=32,simpan=0;
    while(x>0)
    {
        simpanx[a]=x%2;
        simpan=a;
        x/=2;
        a--;
    }
    return simpan;
}
int ceky(unsigned long long int x)
{
    int a=32,simpan=0;
    while(x>0)
    {
        simpany[a]=x%2;
        simpan=a;
        x/=2;
        a--;
    }
    return simpan;
}
unsigned long long int hasil(unsigned long long int x,int panjang)
{

    unsigned long long int a=32,total=0,cek=0;
    while(x>0)
    {
        simpanhasil[a]=x%2;
        x/=2;
        a--;
    }
    for(int a=32;a>=panjang;a--)
    {
        if(simpanhasil[a]==1)total+=pow(2,cek);
        cek++;
    }
    return total;
}
int main()
{
    unsigned long long int x,y;
    while(1)
    {
        cin >> x;
        int stop=getchar();
        if(stop==EOF)break;
        cin >> y;
        unsigned long long int sementarax,sementaray,panjang;
        mulai();
        sementarax = cekx(x);
        sementaray = ceky(y);
        if(sementarax>sementaray)panjang=sementaray;
        else panjang=sementarax;
        printf("%lld",hasil(x+y,panjang));
    }
}

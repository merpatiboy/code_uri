#include <iostream>
#include <string>
using namespace std;
int boot_D[10005], boot_E[10005];
int main()
{
    int jumlah,D=0,E=0;
    int ukuran;
    string letak;
    cin >> jumlah;
    for(int a=0;a<jumlah;a++)
    {
        cin >>  ukuran;
        cin >> letak;
        if(letak=="E")
        {
            boot_E[E]=ukuran;
            E++;
        }
         else {
            boot_D[D]=ukuran;
            D++;
        }
    }
    int total = 0;
        for(int a=0;a<D;a++)
        {
            for(int b=0;b<E;b++)
            {
                if((boot_E[b]==boot_D[a])&&boot_D[a]!=-1&&boot_E[b]!=-1)
                {
                    boot_E[b]= -1;
                    boot_D[a] = -1;
                    total++;
                    break;
                }
            }
        }
    cout << total;

}

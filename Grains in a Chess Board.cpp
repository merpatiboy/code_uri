#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int jumlah;
    cin >> jumlah;
    for (int a=0;a<jumlah;a++)
    {
        unsigned long long int pengali,total = 0,sisa=0;
        int y;
        cin >> y;
        for(int a=0;a<y;a++)
        {
            pengali = pow(2,a);
            cout << "pengali: " << pengali << endl;
            total += pengali/12;
            sisa = pengali%12;
        }
        sisa = sisa/12;
        total += sisa;
        cout << total/1000 <<" kg"<< endl;
    }
}

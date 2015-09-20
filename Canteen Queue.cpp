#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int jumlah;
    cin >> jumlah;
    for(int a=0;a<jumlah;a++)
    {
        int jumlah1,total=0;
        cin >> jumlah1;
        int angka[jumlah1],angka1[jumlah1];
        for(int b=0;b<jumlah1;b++)
        {
            cin >> angka[b];
            angka1[b] = angka[b];
        }
        sort(angka1,angka1+jumlah1);
        for(int b=0;b<jumlah1;b++)
        {
            if(angka1[b]==angka[jumlah1-1-b])total++;
        }
        cout << total << endl;

    }
}

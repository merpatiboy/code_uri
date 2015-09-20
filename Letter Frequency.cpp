#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct simpan{
    int urut;
    int total;
};
bool sorter(simpan const& awal,simpan const& akhir)
{
    return awal.total < akhir.total;
}
bool sorter1(simpan const& awal,simpan const& akhir)
{
    return awal.urut< akhir.urut;
}
int main()
{
    int x;
    simpan simpan[27];
    char kata[1000];
    cin >> x;
    getchar();
    for(int c=0;c<x;c++)
    {
        gets(kata);
        for(int b=0;b<26;b++)
        {
            simpan[b].urut = b;
            simpan[b].total = 0;
        }
        for(int a=0;a<strlen(kata);a++)
        {
            if(kata[a]>=97 && kata[a]<=122)
            {
                simpan[kata[a]-97].total++;
            }
            else if(kata[a]>=65 && kata[a]<=90)
                simpan[kata[a]-65].total++;
        }
        sort(simpan,simpan+26,&sorter);
        int max__ = simpan[25].total;
        sort(simpan,simpan+26,&sorter1);
        for(int a=0;a<=25;a++)
        {
            if(max__ ==simpan[a].total)
                printf("%c",simpan[a].urut+97);
        }
        cout << endl;
    }
}

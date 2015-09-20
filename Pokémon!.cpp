#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;

int status(int bs, int iv, int ev, int level)
{
    int dummy = (((sqrt(ev) / 8) + iv + bs)*level/50)+5;
    return dummy;
}
int status_hp(int bs, int iv, int ev, int level)
{
    int dummy = (((sqrt(ev) / 8) + iv + bs + 50)*level/50)+10;
    return dummy;
}
int main()
{
    int loop;
    char pokemon[100];
    int level, bs, iv, ev;
    cin >> loop;
    for(int a=0;a<loop;a++)
    {
        int hp, atk, def, spd;
        cin >> pokemon;
        cin >> level;
        cin >> bs;
        cin >> iv;
        cin >> ev;
        hp = status_hp (bs,iv,ev,level);
        cin >> bs;
        cin >> iv;
        cin >> ev;
        atk = status(bs,iv,ev,level);
        cin >> bs;
        cin >> iv;
        cin >> ev;
        def = status(bs,iv,ev,level);
        cin >> bs;
        cin >> iv;
        cin >> ev;
        spd = status(bs,iv,ev,level);
        printf("Caso #%d: %s nivel %d\n",a+1,pokemon,level);
        cout << "HP: "<< hp <<  endl;
        cout << "AT: "<< atk << endl;
        cout << "DF: "<< def << endl;
        cout << "SP: "<< spd << endl;
    }

}

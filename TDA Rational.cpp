#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int a=0;a<N;a++)
    {
        int ax,ay,bx,by;
        char ta,tb,tc;
        scanf("%d%c%d%c%d%c%d",&ax,&ta,&ay,&tb,&bx,&tc,&by);
        if(tb=='/')
        {
            ax = ax * by;
            ay = ay * bx;
        }
        else if(tb=='*')
        {
            ax = ax*bx;
            ay = by*ay;
        }
        else if(tb=='-')
        {
            ax = ax*by;
            bx = bx*ay;
            ax = ax-by;
            ay = by*ay;
        }
        else if(tb=='+')
        {
            ax = ax*by;
            bx = bx*ay;
            ax = ax+by;
            ay = by*ay;
        }
        cout << ax << ta << ay << endl;
    }
}

#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    while(1)
    {
        int N,H,v,t,c,x,y,save[1005]={0};
        cin >> N;
        c = getchar();
        if(c == EOF)
            break;
        cin >> H;
        int total = 0;
        for(int a=0;a<N;a++)
        {
            cin >> y;
            cin >> x;
            if(save[x]==0 && x<=H)
                save[x] = y;
            else if(save[x]!=0 && x<=H)
            {
                //cout << save[x] << endl;
                if(y>save[x])
                {
                    swap(y,save[x]);
                   // cout << y << endl;
                    total += y;
                }
                else
                    total += y;
            }
        }
        cout << total << endl;
    }
}

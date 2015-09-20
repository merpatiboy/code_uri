#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x,y,Case = 1;
    while(1)
    {
        cin >> x;
        cin >> y;
        if(x==0 && y==0)
            break;
        int flag = 0;
        for(int a=1;a<=y;a++)
        {
            if(a*24>=x)
            {
                flag = a;
                break;
            }
        }
        if(flag==0)
            printf("Case %d: impossible\n",Case);
        else
            printf("Case %d: %d\n",Case,flag);
        Case ++;
    }
}

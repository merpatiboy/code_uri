#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int x,y,simpan_x,simpan_y;
    while(scanf("%lld %lld",&x,&y))
    {
        if(x==0 && y==0)break;
        int total=0,tanda=0;
        while(x>0 || y>0)
        {
            simpan_x=x%10;
            simpan_y=y%10;
            if((simpan_x+simpan_y+tanda)>9)
            {
                tanda = 1;
                total++;
            }
            else
            {
                tanda=0;
            }
            x/=10;
            y/=10;
        }
        if(total==0)printf("No carry operation.\n");
        else if(total==1)printf("1 carry operation.\n");
        else printf("%d carry operations.\n",total);
    }
}

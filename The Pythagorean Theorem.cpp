#include <iosteam>
#include <math.h>
#include <algorithm>
using namespace std;
void cek_max(long long int &x,long long int &y,long long int &z)
{
    if(y>=x && y>=z)
    {
        swap(y,z);
    }
    else if(x>=z && x>=y)
    {
        swap(x,z);
    }
}
int gcd(int x,int y,int z)
{
    int dev_x[1000],dev_y[1000],dev_z[1000];
    int tanda_x = 0,tanda_y =0, tanda_z=0;
    for(int a=1;a<=sqrt(x);a++)
    {
        if(x%a==0)
        {
            dev_x[tanda_x]=a;
            dev_x[tanda_x+1] = x/a;
            tanda_x+=2;
        }
    }
    sort(dev_x,dev_x+tanda_x-2);
    for(int a=1;a<=sqrt(y);a++)
    {
        if(y%a==0)
        {
            dev_y[tanda_y]=a;
            dev_y[tanda_y+1] = y/a;
            tanda_y+=2;
        }
    }
    sort(dev_y,dev_y+tanda_y-2);
    for(int a=1;a<=sqrt(z);a++)
    {
        if(z%a==0)
        {
            dev_z[tanda_z]=a;
            dev_z[tanda_z+1] = z/a;
            tanda_z+=2;
        }
    }
    sort(dev_z,dev_z+tanda_z-2);
    for(int a=0;a<tanda_x-1;a++)
    {
        for(int b=0;b<tanda_y-1;b++)
        {
            for(int c=0;a<tanda_z-1;c++)
            {
                if()
            }
        }
    }
}
int main()
{
    long long int x,y.z;
    cin >> x;
    cin >> y;
    cin >> z;
    cek_max(x,y,z);
    if(pow(z,2)==sqrt(pow(x,2)+pow(y,2)))
    {
        int cek_primitive = 0;
        cek_primitive = gcd(x,y,z);
    }
    else{
        cout << "tripla" << endl;
    }
}

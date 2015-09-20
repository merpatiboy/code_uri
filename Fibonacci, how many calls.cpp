#include <iostream>
#include <stdio.h>

using namespace std;
int y =0;
long long int fib(unsigned long long int x)
{
    if(x==1)
    {
        y++;
        return 1;
    }
    else if(x<=0)
    {
        y++;
        return 0;
    }
    else
    {
        y++;
        return fib(x-1)+fib(x-2);
    }
}
int main()
{
    unsigned long long int x,v;
    int z;
    cin >> z;
    for(int a=0;a<z;a++)
    {
        y = 0;
        cin >> x;
        v = fib(x);
        printf("fib(%lld) = %d calls = ",x,y-1);
        cout << v << endl;
    }
}

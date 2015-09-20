#include <iostream>
using namespace std;

int main()
{
    unsigned long long int val[105];
    val[0] = 0;
    val[1] = 1;
    for(int a=2;a<=100;a++)
    {
        val[a] = val[a-1] + a*a;
    }
    while(1)
    {
        int x;
        cin >> x;
        if(x==0)break;
        cout << val[x] << endl;
    }

}

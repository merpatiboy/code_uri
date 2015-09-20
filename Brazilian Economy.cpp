#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int x, z, yes = 0, no = 0;
    cin >> x;
    for(int a=0;a<x;a++)
    {
        cin >> z;
        if (z==1)
            no++;
        else if(z==0)
            yes ++;
    }
    if(no >= yes)
        cout << "N" << endl;
    else cout << "Y" << endl;
}
